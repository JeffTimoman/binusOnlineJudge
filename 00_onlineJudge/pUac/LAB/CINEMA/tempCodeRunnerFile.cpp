for (int i = 0; i < currIndex; i++){
        int duration = (movies[i].eH - movies[i].sH) * 60 + (movies[i].eM - movies[i].sM);
        if (duration < 0) duration += 24 * 60;
        printf("| %-5s | %-13s | %-25s | %6d%-6d | %6d%-6d | %-8d%12s | %-8d |\n", i+1, movies[i].id, movies[i].name, movies[i].sH, movies[i].sM, movies[i].eH, movies[i].eM, duration, "minutes", movies[i].studio);
    }