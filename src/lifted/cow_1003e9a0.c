/* f_0x1003e9a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1003e9a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (!(rd32(self + 0x10cu) >> 0x1cu & 1u))
    {
        eax = rd8(COW_IMG(0x1047b9c4u));
        if ((eax & 2u) != 0u)
        {
            edx = in_edx;
        }
        else
        {
            t6 = rd8(COW_IMG(0x1047b9c4u));
            wr8(COW_IMG(0x1047b9c4u), (uint8_t)(t6 | 2u));
            g->eax = eax;
            g->edx = (in_edx & 0xffffff00u) | t6 | 2u;
            g->esp = sp0 - 8u;
            t7 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047b9c8u), 0);
            t8 = g->ecx;
            t9 = g->edx;
            g->edx = t9;
            t10 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x1003eb10u));
            t11 = g->edx;
            eax = t10;
            edx = t11;
        }
        g->esp = sp0 - 8u;
        cow_fastcall(g, COW_IMG(0x1006af90u), COW_IMG(0x1047b9c8u), edx, 1, COW_IMG(0x10351fa0u));
        edi = 1u;
    }
    else
    {
        eax = rd8(COW_IMG(0x1047b9c4u));
        if (eax & 1u)
        {
            edx = in_edx;
        }
        else
        {
            wr8(COW_IMG(0x1047b9c4u), (uint8_t)(eax | 1u));
            g->eax = eax;
            g->edx = (in_edx & 0xffffff00u) | (uint8_t)(eax | 1u);
            g->esp = sp0 - 8u;
            t1 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047b9b8u), 0);
            t2 = g->ecx;
            t3 = g->edx;
            g->edx = t3;
            t4 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x1003eb20u));
            t5 = g->edx;
            eax = t4;
            edx = t5;
        }
        g->esp = sp0 - 8u;
        cow_fastcall(g, COW_IMG(0x1006af90u), COW_IMG(0x1047b9b8u), edx, 1, COW_IMG(0x10351ec8u));
        edi = 0u;
    }
    t12 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    g->edx = rd32(COW_IMG(0x1047bc0cu));
    t13 = rd32(COW_IMG(0x1047bc0cu));
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(rd32(t12) + 0xc8u), rd32(t12), 3, t12, 0x3cu, t13);
    t14 = g->edx;
    t15 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    t16 = rd32(t15);
    cow_thiscall(g, rd32(t16 + 0xc8u), t16, 3, t15, 0x89u, 0u);
    t17 = g->ecx;
    t18 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    g->edx = rd32(t18);
    t19 = rd32(t18);
    cow_thiscall(g, rd32(t19 + 0xc8u), t17, 3, t18, 0x1cu, 0u);
    t20 = g->edx;
    t21 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    t22 = rd32(t21);
    cow_thiscall(g, rd32(t22 + 0xc8u), t22, 3, t21, 0x30u, 0u);
    t23 = g->ecx;
    t24 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    g->eax = t24;
    g->edx = rd32(t24);
    t25 = rd32(t24);
    t26 = cow_thiscall(g, rd32(t25 + 0xc8u), t23, 3, t24, 0xeu, 0u);
    t27 = g->ecx;
    t28 = g->edx;
    if (rd8(self + 0x16cu) == 0x40u)
    {
        eax = t26;
        ecx = t27;
        edx = t28;
        if ((rd8(COW_IMG(0x1047b9c4u)) & 4u) != 0u)
        {
            eax = (eax & 0xffffff00u) | 4u;
        }
        else
        {
            eax = (eax & 0xffffff00u) | 4u;
            ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x1047b9c4u));
            wr8(COW_IMG(0x1047b9c4u), (uint8_t)(ecx | eax));
            g->eax = eax;
            g->edx = (edx & 0xffffff00u) | (uint8_t)(ecx | eax);
            g->esp = sp0 - 8u;
            t29 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047b9d8u), 0);
            t30 = g->ecx;
            t31 = g->edx;
            g->edx = t31;
            t32 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x1003eb00u));
            t33 = g->edx;
            eax = t32;
            edx = t33;
        }
        g->esp = sp0 - 8u;
        cow_fastcall(g, COW_IMG(0x1006af90u), COW_IMG(0x1047b9d8u), edx, 1, COW_IMG(0x10352084u));
        edi = edi + 2u;
    }
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003e9a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1003e9a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
