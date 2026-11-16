/* f_0x10033800 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10033800(Guest* g)
{
    uint32_t eax;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 160u);

    wr32(sp0 - 0x84u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0x84u;
    cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t1 = g->edx;
    g->edx = t1;
    t2 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x80u, 0);
    t3 = g->edx;
    if (rd16(COW_IMG(0x1045b77au)) != 1u)
    {
        eax = t2;
        edx = t3;
        goto L_10033a4a;
    }
    eax = t2;
    edx = t3;
    if (!((double)rdf32(COW_IMG(0x1045b80cu)) < (double)rdf32(COW_IMG(0x1032a3a0u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1045b80cu)), (double)rdf32(COW_IMG(0x1032a3a0u)), 0u);
        goto L_10033a4a;
    }
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        goto L_10033a4a;
    }
    wr32(sp0 - 0x88u, 0u);
    wr32(COW_IMG(0x1045b800u), rd32(arg1));
    t4 = rd32(arg1 + 4u);
    wr32(COW_IMG(0x1045b804u), t4);
    wr32(COW_IMG(0x1045b808u), arg2);
    if (rd8(self + 4u) != 0u)
    {
        edx = t4;
        t9 = rd32(self + 0xcu);
        wr32(sp0 - 0x8cu, t9);
        t10 = rd32(self + 8u);
        wr32(sp0 - 0x90u, t10);
        g->esp = sp0 - 0x84u;
        cow_thiscall(g, COW_IMG(0x10009e20u), rd32(COW_IMG(0x1045666cu)), 3, t10, t9, 0u);
    }
    else
    {
        eax = (arg2 & 0xffffff00u) | rd8(self + 4u);
        t5 = rd32(self + 0xcu);
        wr32(sp0 - 0x8cu, t5);
        t6 = rd32(self + 8u);
        wr32(sp0 - 0x90u, t6);
        g->eax = eax;
        g->edx = t6;
        g->esp = sp0 - 0x84u;
        t7 = cow_thiscall(g, COW_IMG(0x10009e20u), rd32(COW_IMG(0x1045666cu)), 3, t6, t5, 0u);
        t8 = g->edx;
        wr32(sp0 - 0x88u, 0u);
        wr32(sp0 - 0x8cu, 0u);
        wr32(sp0 - 0x90u, 0u);
        wr32(sp0 - 0x94u, 1u);
        wr32(sp0 - 0x98u, 0u);
        wr32(sp0 - 0x9cu, 0u);
        cow_fastcall(g, COW_IMG(0x100096b0u), rd32(COW_IMG(0x1045666cu)), t8, 6, 0u, 0u, 1u, 0u, 0u, 0u);
        wr8(self + 4u, 1u);
    }
    wr32(sp0 - 0x88u, 0x80ffffffu);
    wr32(sp0 - 0x8cu, 0x3cu);
    t11 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x90u, t11);
    g->esp = sp0 - 0x84u;
    cow_thiscall(g, rd32(rd32(t11) + 0xc8u), rd32(t11), 3, t11, 0x3cu, 0x80ffffffu);
    wr32(sp0 - 0x88u, 3u);
    wr32(sp0 - 0x8cu, 1u);
    wr32(sp0 - 0x90u, 0u);
    t12 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x94u, t12);
    cow_thiscall(g, rd32(rd32(t12) + 0xfcu), rd32(t12), 4, t12, 0u, 1u, 3u);
    wr32(sp0 - 0x88u, 3u);
    wr32(sp0 - 0x8cu, 3u);
    wr32(sp0 - 0x90u, 0u);
    t13 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x94u, t13);
    cow_thiscall(g, rd32(rd32(t13) + 0xfcu), rd32(t13), 4, t13, 0u, 3u, 3u);
    wr32(sp0 - 0x88u, 3u);
    wr32(sp0 - 0x8cu, 4u);
    wr32(sp0 - 0x90u, 0u);
    t14 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x94u, t14);
    cow_thiscall(g, rd32(rd32(t14) + 0xfcu), rd32(t14), 4, t14, 0u, 4u, 3u);
    wr32(sp0 - 0x88u, 3u);
    wr32(sp0 - 0x8cu, 6u);
    wr32(sp0 - 0x90u, 0u);
    t15 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x94u, t15);
    cow_thiscall(g, rd32(rd32(t15) + 0xfcu), rd32(t15), 4, t15, 0u, 6u, 3u);
    wr32(sp0 - 0x88u, 1u);
    wr32(sp0 - 0x8cu, 1u);
    wr32(sp0 - 0x90u, 1u);
    t16 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x94u, t16);
    cow_thiscall(g, rd32(rd32(t16) + 0xfcu), rd32(t16), 4, t16, 1u, 1u, 1u);
    wr32(sp0 - 0x88u, 1u);
    wr32(sp0 - 0x8cu, 4u);
    wr32(sp0 - 0x90u, 1u);
    t17 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x94u, t17);
    cow_thiscall(g, rd32(rd32(t17) + 0xfcu), rd32(t17), 4, t17, 1u, 4u, 1u);
    wr32(sp0 - 0x88u, 0u);
    wr32(sp0 - 0x8cu, 0x89u);
    t18 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x90u, t18);
    cow_thiscall(g, rd32(rd32(t18) + 0xc8u), rd32(t18), 3, t18, 0x89u, 0u);
    wr32(sp0 - 0x88u, 0u);
    wr32(sp0 - 0x8cu, 0x1cu);
    t19 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x90u, t19);
    cow_thiscall(g, rd32(rd32(t19) + 0xc8u), rd32(t19), 3, t19, 0x1cu, 0u);
    wr32(sp0 - 0x88u, 0u);
    wr32(sp0 - 0x8cu, 7u);
    t20 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x90u, t20);
    cow_thiscall(g, rd32(rd32(t20) + 0xc8u), rd32(t20), 3, t20, 7u, 0u);
    wr32(sp0 - 0x88u, 0u);
    wr32(sp0 - 0x8cu, 0xeu);
    t21 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x90u, t21);
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t21, 0xeu, 0u);
    wr32(sp0 - 0x88u, 1u);
    wr32(sp0 - 0x8cu, 9u);
    t22 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x90u, t22);
    g->eax = t22;
    t23 = rd32(t22);
    t24 = cow_thiscall(g, rd32(t23 + 0xc8u), t23, 3, t22, 9u, 1u);
    t25 = g->ecx;
    wr32(sp0 - 0x88u, 0x477fff00u);
    wr32(sp0 - 0x8cu, 0x3dcccccdu);
    wr32(sp0 - 0x90u, 0x3f800000u);
    wr32(sp0 - 0x94u, 0x3e490fdbu);
    wr32(sp0 - 0x98u, sp0 - 0x80u);
    g->edx = sp0 - 0x80u;
    cow_stdcall(g, COW_IMG(0x102d83e6u), 5, sp0 - 0x80u, 0x3e490fdbu, 0x3f800000u, 0x3dcccccdu, 0x477fff00u);
    t26 = g->edx;
    wr32(sp0 - 0x88u, sp0 - 0x80u);
    wr32(sp0 - 0x8cu, 3u);
    g->eax = sp0 - 0x80u;
    g->edx = t26;
    t27 = cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 3u, sp0 - 0x80u);
    t28 = g->edx;
    wr32(sp0 - 0x88u, COW_IMG(0x1045b7c0u));
    wr32(sp0 - 0x8cu, 2u);
    g->edx = t28;
    t29 = cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 2u, COW_IMG(0x1045b7c0u));
    t30 = g->edx;
    wr32(sp0 - 0x88u, COW_IMG(0x1045b780u));
    wr32(sp0 - 0x8cu, 0x100u);
    g->edx = t30;
    t31 = cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, COW_IMG(0x1045b780u));
    t32 = g->edx;
    g->edx = t32;
    t33 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t34 = g->edx;
    t35 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    g->esi = rd32(sp0 - 0x84u);
    return (t35 & 0xffffff00u) | 1u;
L_10033a4a: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x84u;
    t36 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t37 = g->edx;
    t38 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    return t38 & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10033800(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10033800(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
