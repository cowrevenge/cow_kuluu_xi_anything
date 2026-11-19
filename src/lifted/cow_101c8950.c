/* f_0x101c8950 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101c8950(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t of;
    uint32_t sf;
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
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_edi = g->edi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101c8973u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_101c8973;
    case 0x101c8978u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_101c8978;
    case 0x101c897du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_101c897d;
    case 0x101c8982u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_101c8982;
    case 0x101c8984u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_101c8984;
    case 0x101c8989u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_101c8989;
    case 0x101c8995u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_101c8995;
    case 0x101c89a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_101c89a1;
    case 0x101c89abu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_101c89ab;
    default: break;
    }
#endif

    COW_AT(101c8950)
    g->edx = in_edx;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x5bu);
    t2 = g->edx;
    t3 = rd32(COW_IMG(0x10456a28u));
    wr8(COW_IMG(0x10662f64u), rd8(t1));
    if ((int8_t)rd8(t3 + 0x18u) >= 0)
    {
        eax = rd32(t3 + 8u);
        edx = (t2 & 0xffffff00u) | rd8(t3 + 0x18u);
        goto L_101c897d;
    }
    eax = rd32(t3 + 8u);
    edx = (t2 & 0xffffff00u) | rd8(t3 + 0x18u);
    COW_AT(101c8973)
    if (eax == 2u) goto L_101c89a1;
    COW_AT(101c8978)
    if (eax == 3u) goto L_101c89a1;
L_101c897d: ;
    COW_AT(101c897d)
    if (eax == 1u) goto L_101c89a1;
    zf = eax == 1u;
    sf = (int32_t)(eax - 1u) < 0;
    of = ((eax ^ 1u) & (eax ^ eax - 1u)) >> 0x1fu;
    COW_AT(101c8982)
    if (zf || sf != of) goto L_101c8995;
    COW_AT(101c8984)
    if ((int32_t)eax > 3) goto L_101c8995;
    COW_AT(101c8989)
    wr32(COW_IMG(0x10662f60u), COW_IMG(0x101c8bc0u));
L_101c89ab: ;
    COW_AT(101c89ab)
    edi = COW_IMG(0x10662e50u);
    eax = 0u;
    ecx = 0x12u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1036cf1cu));
    t5 = g->edx;
    wr32(COW_IMG(0x10662e50u), t4);
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1036ffb4u));
    t7 = g->edx;
    wr32(COW_IMG(0x10662e54u), t6);
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1036ffc8u));
    t9 = g->edx;
    wr32(COW_IMG(0x10662e58u), t8);
    g->edx = t9;
    t10 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1037d4a8u));
    t11 = g->ecx;
    t12 = g->edx;
    wr32(COW_IMG(0x10662e5cu), t10);
    g->edx = t12;
    t13 = cow_cdecl(g, COW_IMG(0x1025b5c0u), 1, 0u);
    t14 = g->edx;
    g->edx = t14;
    t15 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, t13);
    t16 = g->edx;
    wr32(COW_IMG(0x10662e60u), t15);
    g->edx = t16;
    t17 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1037d494u));
    t18 = g->edx;
    wr32(COW_IMG(0x10662e64u), t17);
    g->edx = t18;
    t19 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1037d480u));
    t20 = g->edx;
    wr32(COW_IMG(0x10662e68u), t19);
    g->edx = t20;
    t21 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1037d46cu));
    t22 = g->edx;
    wr32(COW_IMG(0x10662e6cu), t21);
    g->edx = t22;
    t23 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1037d458u));
    t24 = g->edx;
    wr32(COW_IMG(0x10662e74u), t23);
    g->edx = t24;
    t25 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1037d444u));
    t26 = g->edx;
    wr32(COW_IMG(0x10662e78u), t25);
    g->edx = t26;
    t27 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1037d430u));
    t28 = g->edx;
    wr32(COW_IMG(0x10662e7cu), t27);
    g->edx = t28;
    t29 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1037d41cu));
    t30 = g->edx;
    wr32(COW_IMG(0x10662e80u), t29);
    g->edx = t30;
    t31 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1037d408u));
    t32 = g->edx;
    wr32(COW_IMG(0x10662e84u), t31);
    g->edx = t32;
    t33 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1037d3f4u));
    t34 = g->edx;
    wr32(COW_IMG(0x10662e70u), t33);
    g->edx = t34;
    t35 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1036c98cu));
    t36 = g->edx;
    wr32(COW_IMG(0x10662e88u), t35);
    g->edx = t36;
    t37 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x10377cbcu));
    t38 = g->edx;
    wr32(COW_IMG(0x10662e8cu), t37);
    g->edx = t38;
    t39 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1037d3e0u));
    t40 = g->ecx;
    t41 = g->edx;
    wr32(COW_IMG(0x10662e90u), t39);
    t42 = cow_thiscall_cdecl(g, COW_IMG(0x101cc620u), t40, 2, 0x5cu, COW_IMG(0x10662f18u));
    wr32(COW_IMG(0x10662e94u), t42);
    g->edi = in_edi;
    return t42;
L_101c8995: ;
    COW_AT(101c8995)
    wr32(COW_IMG(0x10662f60u), COW_IMG(0x101c8b30u));
    goto L_101c89ab;
L_101c89a1: ;
    COW_AT(101c89a1)
    wr32(COW_IMG(0x10662f60u), COW_IMG(0x101c8b80u));
    goto L_101c89ab;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101c8950(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101c8973u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101c8978u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101c897du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101c8982u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101c8984u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101c8989u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101c8995u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101c89a1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101c89abu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101c8950(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101c8950(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
