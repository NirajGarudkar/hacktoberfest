import { StatusBar } from 'expo-status-bar';
import React from 'react';
import { StyleSheet, Text, View, Image } from 'react-native';
import { createNativeStackNavigator } from "@react-navigation/native-stack";
import { NavigationContainer } from '@react-navigation/native';

const Stack = createNativeStackNavigator();

const App = () => {
  return (
      <NavigationContainer>
          <Stack.Navigator>
              <Stack.Screen name="Home" component={HomeScreen} />
          </Stack.Navigator>
      </NavigationContainer>
    );
}

function HomeScreen() {
    return (
        <View style={{ flex: 1, alignItems: 'center', justifyContent: 'center' }}>
            <Text style={{color:"#000000"}}>Home Screen</Text>
        </View>
    );
}

const styles = StyleSheet.create({
    tex:{
        flex: 1,
        justifyContent: "center",
        alignItems: "center",
        color:"#000000",
    }
});

export default App;
