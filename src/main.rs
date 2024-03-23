use bevy::prelude::*;

#[derive(Component)]
struct Person;
#[derive(Component)]
struct Name(String);

fn add_people(mut commands: Commands) {
    commands.spawn((Person, Name("Renzo Hume".to_string())));
    commands.spawn((Person, Name("Elaina Hume".to_string())));
}

fn hello_world() {
    println!("Hello, World!");
}

fn greet_people(query: Query<&Name, With<Person>>) {
    for name in &query {
        println!("Hello {}!", name.0);
    }
}

fn update_people(mut query: Query<&mut Name, With<Person>>) {
    for mut name in &mut query {
        if name.0 == "Renzo Hume" {
            name.0 = "Renzo Proctor".to_string();
            break;
        }
    }
}

fn main() {
    App::new()
        .add_systems(Startup, add_people)
        .add_systems(Update, (
            hello_world,
            (greet_people, update_people).chain(),
        ))
        .run();
}
