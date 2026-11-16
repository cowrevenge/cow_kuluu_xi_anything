/* f_0x100161b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100161b0(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    double x1;
    double x2;
    double x3;
    double x4;
    double x5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0xcu, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x1015d900u), COW_IMG(0x10621838u), 0);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x101201c0u), COW_IMG(0x104e1bf8u), 0);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x10u, 0xa50u);
    t6 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0xa50u);
    if (t6 == 0u)
    {
        eax = t6;
        goto L_100162b8;
    }
    eax = t6;
    t7 = rd32(rd32(COW_IMG(0x103d3cbcu)) + 8u);
    wr32(sp0 - 0x10u, t7);
    t8 = rd32(rd32(COW_IMG(0x103d3cbcu)) + 4u);
    wr32(sp0 - 0x14u, t8);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t9 = cow_thiscall(g, COW_IMG(0x10008f90u), eax, 2, t8, t7);
    d10 = cow_take_float(g);
    d11 = cow_take_float(g);
    d12 = cow_take_float(g);
    d13 = cow_take_float(g);
    d14 = cow_take_float(g);
    d15 = cow_take_float(g);
    wr32(COW_IMG(0x1045666cu), t9);
    if (t9 == 0u)
    {
        eax = t9;
        x5 = d15;
        x4 = d14;
        x3 = d13;
        x2 = d12;
        x1 = d11;
        x0 = d10;
        goto L_100162d6;
    }
    eax = t9;
    x5 = d15;
    x4 = d14;
    x3 = d13;
    x2 = d12;
    x1 = d11;
    x0 = d10;
    wr32(eax + 0x15cu, rd32(COW_IMG(0x10456a58u)));
    wr32(rd32(COW_IMG(0x1045666cu)) + 0x160u, rd32(COW_IMG(0x10456c08u)));
    wr32(sp0 - 0x10u, sp0 - 4u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    t16 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x1cu, t16);
    g->edx = sp0 - 4u;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x40u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t16, 0u, 0u, sp0 - 4u);
    t17 = g->edx;
    t18 = rd32(sp0 - 4u);
    wr32(sp0 - 0x10u, t18);
    cow_thiscall(g, rd32(rd32(t18) + 8u), rd32(t18), 1, t18);
    wr32(sp0 - 0x10u, sp0 - 8u);
    t19 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x14u, t19);
    g->edx = sp0 - 8u;
    cow_thiscall(g, rd32(rd32(t19) + 0x84u), rd32(t19), 2, t19, sp0 - 8u);
    t20 = g->edx;
    t21 = rd32(sp0 - 8u);
    wr32(sp0 - 0x10u, t21);
    cow_thiscall(g, rd32(rd32(t21) + 8u), rd32(t21), 1, t21);
    t22 = rd32(sp0 - 8u);
    wr32(sp0 - 0x10u, t22);
    t23 = rd32(sp0 - 4u);
    wr32(sp0 - 0x14u, t23);
    wr32(sp0 - 0x18u, 0u);
    g->eax = t23;
    g->edx = t22;
    t24 = rd32(COW_IMG(0x1045666cu));
    t25 = cow_thiscall(g, COW_IMG(0x10009620u), t24, 3, 0u, t23, t22);
    t26 = g->ecx;
    t27 = g->edx;
    if ((uint8_t)t25 == 0u)
    {
        eax = t25;
        goto L_100162d6;
    }
    eax = t25;
    ecx = t26;
    edx = t27;
    wr32(sp0 - 0x10u, 0x44u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t28 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x44u);
    if (t28 == 0u)
    {
        eax = t28;
        goto L_100162c5;
    }
    eax = t28;
    wr32(sp0 - 0x10u, rd32(COW_IMG(0x104569c0u)));
    wr32(sp0 - 0x14u, rd32(COW_IMG(0x104569bcu)));
    wr32(sp0 - 0x18u, rd32(COW_IMG(0x104569a8u)));
    wr32(sp0 - 0x1cu, rd32(COW_IMG(0x104569acu)));
    wr32(sp0 - 0x20u, rd32(COW_IMG(0x104569b8u)));
    g->eax = eax;
    g->edx = rd32(COW_IMG(0x104569acu));
    t29 = rd32(COW_IMG(0x104569acu));
    g->esp = sp0 - 0xcu;
    t30 = cow_thiscall(g, COW_IMG(0x10001240u), eax, 5, rd32(COW_IMG(0x104569b8u)), t29, rd32(COW_IMG(0x104569a8u)), rd32(COW_IMG(0x104569bcu)), rd32(COW_IMG(0x104569c0u)));
    t31 = g->ecx;
    t32 = g->edx;
    wr32(COW_IMG(0x103d3c64u), t30);
    eax = t30;
    ecx = t31;
    edx = t32;
    if (eax != 0u) goto L_100162dd;
L_100162d6: ;
    g->esi = rd32(sp0 - 0xcu);
    fpush(g, x0);
    fpush(g, x1);
    fpush(g, x2);
    fpush(g, x3);
    fpush(g, x4);
    fpush(g, x5);
    return eax & 0xffffff00u;
L_100162b8: ;
    wr32(COW_IMG(0x1045666cu), 0u);
    return eax & 0xffffff00u;
L_100162c5: ;
    wr32(COW_IMG(0x103d3c64u), 0u);
    g->esi = rd32(sp0 - 0xcu);
    fpush(g, x0);
    fpush(g, x1);
    fpush(g, x2);
    fpush(g, x3);
    fpush(g, x4);
    fpush(g, x5);
    return eax & 0xffffff00u;
L_100162dd: ;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t33 = cow_fastcall(g, COW_IMG(0x10019140u), ecx, edx, 0);
    t34 = g->ecx;
    t35 = g->edx;
    eax = t33;
    ecx = t34;
    edx = t35;
    esi = COW_IMG(0x10456a00u);
L_100162e7: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t36 = cow_stdcall(g, COW_IMG(0x100191d0u), 0);
    t37 = g->ecx;
    t38 = g->edx;
    wr32(esi, t36);
    if ((int32_t)(esi + 4u) < (int32_t)COW_IMG(0x10456a28u))
    {
        eax = t36;
        ecx = t37;
        edx = t38;
        esi = esi + 4u;
        goto L_100162e7;
    }
    eax = t36;
    g->esi = rd32(sp0 - 0xcu);
    fpush(g, x0);
    fpush(g, x1);
    fpush(g, x2);
    fpush(g, x3);
    fpush(g, x4);
    fpush(g, x5);
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100161b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100161b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
