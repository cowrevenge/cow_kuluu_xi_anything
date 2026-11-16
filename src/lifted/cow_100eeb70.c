/* f_0x100eeb70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100eeb70(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x104df770u)) != 0u)
    {
        edx = rd32(COW_IMG(0x104df770u));
        goto L_100eeb82;
    }
    return 0xffffffffu;
L_100eeb82: ;
    if (rd32(arg1) != 0u) goto L_100eeb95;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_stdcall(g, COW_IMG(0x100edea0u), 0);
    t1 = g->ecx;
    t2 = g->edx;
    ecx = t1;
    edx = t2;
L_100eeba2: ;
    if (rd32(arg1) > 0xau) goto L_100eec48;
    eax = rd32(arg1);
    t6 = rd32(COW_IMG(0x100eedb0u) + eax * 4u);
    switch (t6 - RD)
    {
    case 0x100eebb4u: goto L_100eebb4;
    case 0x100eebf7u: goto L_100eebf7;
    case 0x100eec2fu: goto L_100eec2f;
    case 0x100eec4du: goto L_100eec4d;
    case 0x100eec8fu: goto L_100eec8f;
    case 0x100eeca7u: goto L_100eeca7;
    case 0x100eece9u: goto L_100eece9;
    case 0x100eed19u: goto L_100eed19;
    case 0x100eed53u: goto L_100eed53;
    case 0x100eed73u: goto L_100eed73;
    case 0x100eeda6u: goto L_100eeda6;
    default: rt_fatal(g, COW_IMG(0x100eebadu), "switch");
    }
    return 0;
L_100eeb95: ;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t3 = cow_stdcall(g, COW_IMG(0x100edeb0u), 0);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 != 0u) goto L_100eeda1;
    ecx = t4;
    edx = t5;
    goto L_100eeba2;
L_100eebb4: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t22 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x18u);
    t23 = g->ecx;
    t24 = g->edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall_cdecl(g, COW_IMG(0x100f0000u), t23, 1, t22);
    wr32(rd32(COW_IMG(0x104df770u)) + 0x136acu, 0u);
    t25 = rd32(COW_IMG(0x104df770u)) + 0x136dcu;
    t26 = rd32(rd32(COW_IMG(0x104df770u)) + 0x13690u);
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10115930u), 2, t26, t25);
    t27 = rd32(arg1) + 1u;
    wr32(arg1, t27);
    return 0u;
L_100eebf7: ;
    t21 = rd32(edx + 0x13690u);
    g->esp = sp0 - 8u;
    cow_thiscall_cdecl(g, COW_IMG(0x10115d50u), t21, 2, t21, edx + 0x13698u);
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) == 0u)
    {
        wr32(arg1, rd32(arg1) + 1u);
    }
    zf = rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) + 1u == 0u;
L_100eed4c: ;
    if (zf) goto L_100eeda1;
    return 0u;
L_100eec2f: ;
    t19 = rd32(edx + 0x13690u);
    g->esp = sp0 - 8u;
    cow_thiscall_cdecl(g, COW_IMG(0x10115c30u), arg2, 2, t19, arg2);
    t20 = rd32(arg1) + 1u;
    wr32(arg1, t20);
L_100eec48: ;
    return 0u;
L_100eec4d: ;
    t17 = rd32(edx + 0x13690u);
    g->esp = sp0 - 8u;
    cow_thiscall_cdecl(g, COW_IMG(0x10115d50u), t17, 2, t17, edx + 0x13698u);
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) == 0u)
    {
        wr32(arg1, rd32(arg1) + 1u);
    }
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) != 0xffffffffu) goto L_100eec48;
    t18 = rd32(arg1) + 3u;
    wr32(arg1, t18);
    return 0u;
L_100eec8f: ;
    t16 = rd32(edx + 0x13690u);
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10115970u), 2, t16, edx + 0x136dcu);
L_100eed2c: ;
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) == 0u)
    {
        wr32(arg1, rd32(arg1) + 1u);
    }
    zf = rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) + 1u == 0u;
    goto L_100eed4c;
L_100eeca7: ;
    t15 = rd32(edx + 0x13690u);
    g->esp = sp0 - 8u;
    cow_thiscall_cdecl(g, COW_IMG(0x10115d50u), t15, 2, t15, edx + 0x13698u);
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) == 0u)
    {
        wr32(arg1, 0xau);
    }
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) == 0xffffffffu) goto L_100eeda1;
    return 0u;
L_100eece9: ;
    g->esp = sp0 - 4u;
    t11 = cow_thiscall_cdecl(g, COW_IMG(0x100ef8f0u), ecx, 1, in_edi);
    t12 = rd32(COW_IMG(0x104df770u));
    wr32(t12 + 0x136acu, t11);
    t13 = rd32(rd32(COW_IMG(0x104df770u)) + 0x13690u);
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x10115820u), 3, t13, in_edi, in_esi);
    t14 = rd32(arg1) + 1u;
    wr32(arg1, t14);
    return 0u;
L_100eed19: ;
    t10 = rd32(edx + 0x13690u);
    g->esp = sp0 - 8u;
    cow_thiscall_cdecl(g, COW_IMG(0x10115d50u), edx + 0x13698u, 2, t10, edx + 0x13698u);
    goto L_100eed2c;
L_100eed53: ;
    t8 = rd32(edx + 0x13690u);
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10115970u), 2, t8, edx + 0x136dcu);
    t9 = rd32(arg1) + 1u;
    wr32(arg1, t9);
    return 0u;
L_100eed73: ;
    t7 = rd32(edx + 0x13690u);
    g->esp = sp0 - 8u;
    cow_thiscall_cdecl(g, COW_IMG(0x10115d50u), t7, 2, t7, edx + 0x13698u);
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) == 0u) goto L_100eeda1;
    eax = rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u);
    if (eax != 0xffffffffu) goto L_100eec48;
L_100eeda1: ;
    return 0xffffffffu;
L_100eeda6: ;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100eeb70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100eeb70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
