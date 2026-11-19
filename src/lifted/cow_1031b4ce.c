/* f_0x1031b4ce - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1031b4ce(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_1234;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 4676u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1031b4f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = rd32(sp0 - 0x1234u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x1234u); goto E_1031b4f7;
    case 0x1031b500u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = rd32(sp0 - 0x1234u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x1234u); goto E_1031b500;
    case 0x1031b509u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = rd32(sp0 - 0x1234u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x1234u); goto E_1031b509;
    case 0x1031b511u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = rd32(sp0 - 0x1234u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x1234u); goto E_1031b511;
    case 0x1031b530u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1031b530;
    case 0x1031b540u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1031b540;
    case 0x1031b546u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1031b546;
    case 0x1031b54au: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1031b54a;
    case 0x1031b54eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1031b54e;
    case 0x1031b553u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1031b553;
    case 0x1031b56du: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1031b56d;
    case 0x1031b575u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1031b575;
    case 0x1031b596u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1031b596;
    case 0x1031b59cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1031b59c;
    case 0x1031b5a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1031b5a0;
    case 0x1031b5a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1031b5a4;
    case 0x1031b5a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1031b5a9;
    case 0x1031b5beu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1031b5be;
    case 0x1031b5c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1031b5c2;
    case 0x1031b5d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1031b5d0;
    case 0x1031b5d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1031b5d7;
    case 0x1031b5dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1031b5dc;
    case 0x1031b5e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1031b5e0;
    case 0x1031b5e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1031b5e1;
    case 0x1031b5e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1031b5e5;
    case 0x1031b5f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1031b5f6;
    case 0x1031b5fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1031b5fb;
    case 0x1031b600u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1031b600;
    case 0x1031b613u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_1234 = rd32(sp0 - 0x1234u); loc_4 = rd32(sp0 - 4u); goto E_1031b613;
    default: break;
    }
#endif

    COW_AT(1031b4ce)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x1234u, in_ebx);
    wr32(sp0 - 0x1238u, sp0 - 0x9cu);
    wr32(sp0 - 0x9cu, 0x94u);
    g->eax = sp0 - 0x9cu;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x1234u;
    t1 = cow_stdcall(g, rd32(COW_IMG(0x103291a8u)), 1, sp0 - 0x9cu);   /* kernel32.dll!GetVersionExA */
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        ecx = t2;
        edx = t3;
        goto L_1031b511;
    }
    ecx = t2;
    edx = t3;
    COW_AT(1031b4f7)
    if (rd32(sp0 - 0x8cu) != 2u) goto L_1031b511;
    COW_AT(1031b500)
    if (rd32(sp0 - 0x98u) < 5u) goto L_1031b511;
    COW_AT(1031b509)
    wr32(sp0 - 0x1238u, 1u);
    eax = 1u;
    loc_4 = in_ebp;
    loc_1234 = in_ebx;
L_1031b613: ;
    COW_AT(1031b613)
    g->ebx = loc_1234;
    g->ebp = loc_4;
    return eax;
L_1031b511: ;
    COW_AT(1031b511)
    wr32(sp0 - 0x1238u, 0x1090u);
    wr32(sp0 - 0x123cu, sp0 - 0x1230u);
    wr32(sp0 - 0x1240u, COW_IMG(0x1034a3e8u));
    g->eax = sp0 - 0x1230u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1234u;
    t4 = cow_stdcall(g, rd32(COW_IMG(0x103290c0u)), 3, COW_IMG(0x1034a3e8u), sp0 - 0x1230u, 0x1090u);   /* kernel32.dll!GetEnvironmentVariableA */
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0u)
    {
        ecx = t5;
        edx = t6;
        goto L_1031b600;
    }
    eax = t4;
    edx = t6;
    COW_AT(1031b530)
    if (rd8(sp0 - 0x1230u) == 0u)
    {
        ecx = sp0 - 0x1230u;
        goto L_1031b553;
    }
    ecx = sp0 - 0x1230u;
L_1031b540: ;
    COW_AT(1031b540)
    if ((int8_t)rd8(ecx) < 97)
    {
        eax = (eax & 0xffffff00u) | rd8(ecx);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(ecx);
    COW_AT(1031b546)
        if ((int8_t)eax <= 122)
        {
    COW_AT(1031b54a)
            wr8(ecx, (uint8_t)((uint8_t)eax - 0x20u));
            eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax - 0x20u);
        }
    }
    COW_AT(1031b54e)
    if (rd8(ecx + 1u) != 0u)
    {
        ecx = ecx + 1u;
        goto L_1031b540;
    }
    ecx = ecx + 1u;
L_1031b553: ;
    COW_AT(1031b553)
    wr32(sp0 - 0x1238u, 0x16u);
    wr32(sp0 - 0x123cu, sp0 - 0x1230u);
    wr32(sp0 - 0x1240u, COW_IMG(0x1034a3d0u));
    g->eax = sp0 - 0x1230u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x122cu;
    t7 = cow_cdecl(g, COW_IMG(0x10312980u), 5, COW_IMG(0x1034a3d0u), sp0 - 0x1230u, 0x16u, rd32(sp0 - 0x1234u), rd32(sp0 - 0x1230u));
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 != 0u)
    {
        ecx = t8;
        edx = t9;
    COW_AT(1031b575)
        wr32(sp0 - 0x1238u, 0x104u);
        wr32(sp0 - 0x123cu, sp0 - 0x1a0u);
        wr32(sp0 - 0x1240u, 0u);
        g->eax = sp0 - 0x1a0u;
        g->edx = edx;
        g->esp = sp0 - 0x1234u;
        t10 = cow_stdcall(g, rd32(COW_IMG(0x10329150u)), 3, 0u, sp0 - 0x1a0u, 0x104u);   /* kernel32.dll!GetModuleFileNameA */
        t11 = g->edx;
        if (rd8(sp0 - 0x1a0u) == 0u)
        {
            ecx = sp0 - 0x1a0u;
            edx = t11;
            goto L_1031b5a9;
        }
        eax = t10;
        ecx = sp0 - 0x1a0u;
        edx = t11;
L_1031b596: ;
    COW_AT(1031b596)
        if ((int8_t)rd8(ecx) < 97)
        {
            eax = (eax & 0xffffff00u) | rd8(ecx);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(ecx);
    COW_AT(1031b59c)
            if ((int8_t)eax <= 122)
            {
    COW_AT(1031b5a0)
                wr8(ecx, (uint8_t)((uint8_t)eax - 0x20u));
                eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax - 0x20u);
            }
        }
    COW_AT(1031b5a4)
        if (rd8(ecx + 1u) != 0u)
        {
            ecx = ecx + 1u;
            goto L_1031b596;
        }
        ecx = ecx + 1u;
L_1031b5a9: ;
    COW_AT(1031b5a9)
        wr32(sp0 - 0x1238u, sp0 - 0x1a0u);
        wr32(sp0 - 0x123cu, sp0 - 0x1230u);
        g->esp = sp0 - 0x1220u;
        t12 = cow_call_regs(g, COW_IMG(0x10311ef0u), sp0 - 0x1230u, g->ecx, edx, 1, 7, sp0 - 0x1230u, sp0 - 0x1a0u, rd32(sp0 - 0x1234u), rd32(sp0 - 0x1230u), rd32(sp0 - 0x122cu), rd32(sp0 - 0x1228u), rd32(sp0 - 0x1224u));
        t13 = g->edx;
        eax = t12;
        ecx = sp0 - 0x1a0u;
        edx = t13;
    }
    else
    {
        ecx = t8;
        edx = t9;
    COW_AT(1031b56d)
        eax = sp0 - 0x1230u;
    }
    COW_AT(1031b5be)
    if (eax == 0u) goto L_1031b600;
    COW_AT(1031b5c2)
    wr32(sp0 - 0x1238u, 0x2cu);
    wr32(sp0 - 0x123cu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1230u;
    t14 = cow_thiscall_cdecl(g, COW_IMG(0x10315210u), ecx, 3, eax, 0x2cu, rd32(sp0 - 0x1234u));
    t15 = g->edx;
    if (t14 == 0u)
    {
        ecx = 0x2cu;
        edx = t15;
        goto L_1031b600;
    }
    eax = t14;
    edx = t15;
    COW_AT(1031b5d0)
    if (rd8(eax + 1u) == 0u)
    {
        ecx = eax + 1u;
        eax = eax + 1u;
        goto L_1031b5e5;
    }
    ecx = eax + 1u;
    eax = eax + 1u;
L_1031b5d7: ;
    COW_AT(1031b5d7)
    if (rd8(ecx) != 0x3bu)
    {
    COW_AT(1031b5e0)
        ecx = ecx + 1u;
    }
    else
    {
    COW_AT(1031b5dc)
        wr8(ecx, 0u);
    }
    COW_AT(1031b5e1)
    if (rd8(ecx) != 0u) goto L_1031b5d7;
L_1031b5e5: ;
    COW_AT(1031b5e5)
    wr32(sp0 - 0x1238u, 0xau);
    wr32(sp0 - 0x123cu, 0u);
    wr32(sp0 - 0x1240u, eax);
    g->ebx = 0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1224u;
    t16 = cow_thiscall_cdecl(g, COW_IMG(0x10313979u), ecx, 7, eax, 0u, 0xau, rd32(sp0 - 0x1234u), rd32(sp0 - 0x1230u), rd32(sp0 - 0x122cu), rd32(sp0 - 0x1228u));
    t17 = g->ecx;
    t18 = g->edx;
    if (t16 == 2u)
    {
        eax = t16;
        loc_4 = rd32(sp0 - 4u);
        loc_1234 = rd32(sp0 - 0x1234u);
        goto L_1031b613;
    }
    eax = t16;
    ecx = t17;
    edx = t18;
    COW_AT(1031b5f6)
    if (eax == 3u)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_1234 = rd32(sp0 - 0x1234u);
        goto L_1031b613;
    }
    COW_AT(1031b5fb)
    if (eax == 1u)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_1234 = rd32(sp0 - 0x1234u);
        goto L_1031b613;
    }
L_1031b600: ;
    COW_AT(1031b600)
    wr32(sp0 - 0x1238u, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->esp = sp0 - 0x122cu;
    t19 = cow_call_regs(g, COW_IMG(0x1031b4a1u), g->eax, ecx, edx, 1, 3, sp0 - 8u, rd32(sp0 - 0x1234u), rd32(sp0 - 0x1230u));
    eax = -(rd8(sp0 - 8u) < 6u) + 3u;
    loc_4 = rd32(sp0 - 4u);
    loc_1234 = rd32(sp0 - 0x1234u);
    goto L_1031b613;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1031b4ce(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1031b4f7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = rd32(sp0 - 0x1234u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1234u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x1238u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x1031b500u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = rd32(sp0 - 0x1234u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1234u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x1238u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x1031b509u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = rd32(sp0 - 0x1234u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1234u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x1238u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x1031b511u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = rd32(sp0 - 0x1234u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1234u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x1238u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x1031b530u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1234u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x123cu, sp0 - 0x1230u);
        (void)sp0;
        return 1;
    }
    case 0x1031b540u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1234u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x123cu, sp0 - 0x1230u);
        (void)sp0;
        return 1;
    }
    case 0x1031b546u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1234u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x123cu, sp0 - 0x1230u);
        (void)sp0;
        return 1;
    }
    case 0x1031b54au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1234u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x123cu, sp0 - 0x1230u);
        (void)sp0;
        return 1;
    }
    case 0x1031b54eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1234u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x123cu, sp0 - 0x1230u);
        (void)sp0;
        return 1;
    }
    case 0x1031b553u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1234u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x123cu, sp0 - 0x1230u);
        (void)sp0;
        return 1;
    }
    case 0x1031b56du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1234u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x123cu, sp0 - 0x1230u);
        (void)sp0;
        return 1;
    }
    case 0x1031b575u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1234u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x123cu, sp0 - 0x1230u);
        (void)sp0;
        return 1;
    }
    case 0x1031b596u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1234u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x123cu, sp0 - 0x1a0u);
        (void)sp0;
        return 1;
    }
    case 0x1031b59cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1234u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x123cu, sp0 - 0x1a0u);
        (void)sp0;
        return 1;
    }
    case 0x1031b5a0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1234u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x123cu, sp0 - 0x1a0u);
        (void)sp0;
        return 1;
    }
    case 0x1031b5a4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1234u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x123cu, sp0 - 0x1a0u);
        (void)sp0;
        return 1;
    }
    case 0x1031b5a9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1234u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x123cu, sp0 - 0x1a0u);
        (void)sp0;
        return 1;
    }
    case 0x1031b5beu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1234u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x123cu, sp0 - 0x1230u);
        (void)sp0;
        return 1;
    }
    case 0x1031b5c2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1234u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x123cu, sp0 - 0x1230u);
        (void)sp0;
        return 1;
    }
    case 0x1031b5d0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1234u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031b5d7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1234u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031b5dcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1234u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031b5e0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1234u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031b5e1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1234u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031b5e5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1234u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031b5f6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1234u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031b5fbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1234u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031b600u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1234u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031b613u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_1234;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_1234 = rd32(sp0 - 0x1234u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1234u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1031b4ce(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1031b4ce(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
