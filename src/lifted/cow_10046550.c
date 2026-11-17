/* f_0x10046550 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10046550(Guest* g)
{
    double d18;
    double d8;
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
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    if ((rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xdecu) >> 8u & 8u) != 0u)
    {
        eax = rd32(COW_IMG(0x1047bfa8u));
        edx = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xdecu);
        goto L_10046756;
    }
    edx = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xdecu);
    g->eax = rd32(self);
    g->edx = edx;
    t1 = rd32(self);
    g->esp = sp0;
    t2 = cow_thiscall(g, rd32(t1 + 0x50u), self, 0);
    t3 = g->edx;
    if (!((double)rdf32(COW_IMG(0x1047bbc8u)) < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t2 & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1047bbc8u)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = t3;
    }
    else
    {
        eax = (t2 & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1047bbc8u)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = t3;
        wr32(COW_IMG(0x1047bbc8u), 0u);
    }
    if ((double)rdf32(COW_IMG(0x1047bbccu)) < (double)rdf32(COW_IMG(0x103295d8u)))
    {
        wr32(COW_IMG(0x1047bbccu), 0u);
    }
    g->eax = rd32(COW_IMG(0x1047bfa8u));
    g->edx = edx;
    t4 = rd32(COW_IMG(0x1047bfa8u));
    g->esp = sp0;
    t5 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t4 + 0xdc8u), 0);
    t6 = g->edx;
    t7 = rd32(t5 + 8u);
    wr32(sp0 + 4u, t7);
    d8 = (double)(int32_t)rd32(sp0 + 4u);
    if (!(d8 <= (double)rdf32(COW_IMG(0x1047bbd0u))))
    {
        edx = t6;
    }
    else
    {
        edx = t6;
        g->eax = rd32(COW_IMG(0x1047bfa8u));
        g->edx = edx;
        t9 = rd32(COW_IMG(0x1047bfa8u));
        g->esp = sp0;
        t10 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t9 + 0xdc8u), 0);
        t11 = g->edx;
        t12 = rd32(t10 + 8u);
        wrf32(COW_IMG(0x1047bbd0u), (float)(double)(int32_t)t12);
        edx = t11;
    }
    g->eax = rd32(COW_IMG(0x1047bfa8u));
    t13 = rd32(COW_IMG(0x1047bfa8u));
    t14 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc8u);
    g->esp = sp0;
    t15 = cow_thiscall(g, COW_IMG(0x10009e00u), t14, 0);
    t16 = g->ecx;
    t17 = rd32(t15 + 0xcu);
    wr32(sp0 + 4u, t17);
    d18 = (double)(int32_t)rd32(sp0 + 4u);
    if (!(d18 <= (double)rdf32(COW_IMG(0x1047bbd4u))))
    {
        eax = (t15 & 0xffff0000u) | (uint16_t)cow_fsw(g, d18, (double)rdf32(COW_IMG(0x1047bbd4u)), 0u);
        ecx = t16;
        edx = t17;
    }
    else
    {
        edx = t17;
        g->eax = rd32(COW_IMG(0x1047bfa8u));
        g->edx = edx;
        t19 = rd32(COW_IMG(0x1047bfa8u));
        t20 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc8u);
        g->esp = sp0;
        t21 = cow_thiscall(g, COW_IMG(0x10009e00u), t20, 0);
        t22 = g->ecx;
        t23 = g->edx;
        t24 = rd32(t21 + 0xcu);
        wrf32(COW_IMG(0x1047bbd4u), (float)(double)(int32_t)t24);
        eax = t21;
        ecx = t22;
        edx = t23;
    }
    if (rd8(COW_IMG(0x1047bbfcu)) & 1u)
    {
        eax = (eax & 0xffffff00u) | 1u;
    }
    else
    {
        eax = (eax & 0xffffff00u) | 1u;
        ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x1047bbfcu));
        wr8(COW_IMG(0x1047bbfcu), (uint8_t)(ecx | eax));
        g->eax = eax;
        g->edx = (edx & 0xffffff00u) | (uint8_t)(ecx | eax);
        g->esp = sp0;
        t25 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047bbe8u), 0);
        t26 = g->ecx;
        t27 = g->edx;
        g->edx = t27;
        t28 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x100467d0u));
        t29 = g->edx;
        eax = t28;
        edx = t29;
    }
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t30 = cow_fastcall(g, COW_IMG(0x1006ae30u), COW_IMG(0x1047bbe8u), edx, 0);
    t31 = g->edx;
    g->edx = t31;
    t32 = cow_stdcall(g, COW_IMG(0x10044010u), 1, 4u);
    t33 = g->edx;
    t34 = cow_thiscall(g, COW_IMG(0x10044130u), rd32(COW_IMG(0x1047bba4u)), 0);
    wr32(t34, rd32(COW_IMG(0x1047bbc8u)));
    wr32(t34 + 4u, rd32(COW_IMG(0x1047bbccu)));
    wr32(t34 + 8u, 0u);
    wr32(t34 + 0xcu, 0x3f800000u);
    wr32(t34 + 0x10u, 0xffffffffu);
    wr32(t34 + 0x14u, rd32(COW_IMG(0x1047bbd0u)));
    wr32(t34 + 0x18u, rd32(COW_IMG(0x1047bbccu)));
    wr32(t34 + 0x1cu, 0u);
    wr32(t34 + 0x20u, 0x3f800000u);
    wr32(t34 + 0x24u, 0xffffffffu);
    wr32(t34 + 0x28u, rd32(COW_IMG(0x1047bbc8u)));
    wr32(t34 + 0x2cu, rd32(COW_IMG(0x1047bbd4u)));
    wr32(t34 + 0x30u, 0u);
    wr32(t34 + 0x34u, 0x3f800000u);
    wr32(t34 + 0x38u, 0xffffffffu);
    wr32(t34 + 0x3cu, rd32(COW_IMG(0x1047bbd0u)));
    t35 = rd32(COW_IMG(0x1047bbd4u));
    wr32(t34 + 0x40u, t35);
    wr32(t34 + 0x44u, 0u);
    wr32(t34 + 0x48u, 0x3f800000u);
    wr32(t34 + 0x4cu, 0xffffffffu);
    g->edx = t35;
    t36 = cow_stdcall(g, COW_IMG(0x100441a0u), 0);
    t37 = g->edx;
    g->edx = t37;
    t38 = cow_thiscall(g, COW_IMG(0x10043f40u), rd32(COW_IMG(0x1047bba4u)), 5, 0u, 2u, 5u, 0u, 0xffffffffu);
    t39 = g->edx;
    if ((rd8(COW_IMG(0x1047bbfcu)) & 2u) != 0u)
    {
        eax = (t38 & 0xffffff00u) | rd8(COW_IMG(0x1047bbfcu));
        edx = t39;
    }
    else
    {
        eax = (t38 & 0xffffff00u) | rd8(COW_IMG(0x1047bbfcu));
        edx = t39;
        wr8(COW_IMG(0x1047bbfcu), (uint8_t)(eax | 2u));
        g->eax = eax;
        g->edx = (edx & 0xffffff00u) | (uint8_t)(eax | 2u);
        g->esp = sp0 - 8u;
        t40 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047bc00u), 0);
        t41 = g->ecx;
        t42 = g->edx;
        g->edx = t42;
        t43 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x100467c0u));
        t44 = g->edx;
        eax = t43;
        edx = t44;
    }
    g->esp = sp0;
    cow_fastcall(g, COW_IMG(0x1006ae30u), COW_IMG(0x1047bc00u), edx, 4, COW_IMG(0x10353558u), COW_IMG(0x103534e8u), in_edi, in_esi);
    g->esi = COW_IMG(0x10353448u);
    g->edi = COW_IMG(0x103534a0u);
    return;
L_10046756: ;
    if (rd8(sp0 + 4u) == 0u)
    {
        eax = rd32(eax + 0xebcu);
        ecx = (self & 0xffffff00u) | rd8(sp0 + 4u);
        goto L_100467a7;
    }
    eax = rd32(eax + 0xebcu);
    t45 = rd32(eax);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(t45 + 0xc8u), t45, 0);
    t46 = g->ecx;
    t47 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    g->edx = rd32(t47);
    t48 = rd32(t47);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(t48 + 0xc8u), t46, 2, t47, 0x14u);
    t49 = g->edx;
    t50 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    g->esp = sp0;
    cow_thiscall(g, rd32(rd32(t50) + 0xc8u), rd32(t50), 7, t50, 0xabu, 3u, 2u, eax, 0x13u, 5u);
    return;
L_100467a7: ;
    g->esp = sp0;
    cow_thiscall(g, rd32(rd32(eax) + 0xc8u), ecx, 3, eax, 0xabu, 1u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10046550(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10046550(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
