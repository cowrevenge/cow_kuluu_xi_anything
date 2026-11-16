/* f_0x100343c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
uint32_t cow_fn_100343c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(self + 4u) == 0u)
    {
        eax = rd32(self + 4u);
        edx = in_edx;
        loc_4 = self;
        goto L_10034613;
    }
    t1 = rd16(rd32(COW_IMG(0x1045ec24u)) + 0x32u);
    if (arg2 == 0u)
    {
        edi = t1;
        loc_4 = t1;
        goto L_10034507;
    }
    edi = t1;
    loc_4 = t1;
    if (arg2 != 1u)
    {
        eax = arg2 - 1u;
        edx = in_edx;
        goto L_10034613;
    }
    if (arg3 != 0xffffffffu)
    {
        wr32(COW_IMG(0x1045ec28u) + arg3 * 4u, 1u);
    }
    if (arg4 != 0xffffffffu)
    {
        wr32(COW_IMG(0x1045ec28u) + arg4 * 4u, 1u);
    }
    if (rd32(sp0 + 0x14u) == 0u)
    {
        eax = rd32(sp0 + 0x14u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(sp0 + 0x14u);
        edx = in_edx;
        ebx = 0xfffffffeu - eax;
        esi = eax + 2u;
L_1003442a: ;
        if (rd8(esi) != 0xffu)
        {
            eax = (eax & 0xffffff00u) | rd8(esi);
            t2 = rd32(COW_IMG(0x1045ec20u)) + (uint32_t)(int8_t)rd8(esi - 2u) * 0x40u;
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, COW_IMG(0x100279f0u), (uint32_t)(int8_t)eax * 0x40u + rd32(COW_IMG(0x1045ec20u)), 1, t2);
            t3 = rd8(esi);
            wr32(COW_IMG(0x1045ec28u) + (uint32_t)(int8_t)t3 * 4u, 1u);
            edx = (uint32_t)(int8_t)t3;
        }
        if ((int32_t)(ebx + esi + 1u) < 2)
        {
            eax = ebx + esi + 1u;
            esi = esi + 1u;
            goto L_1003442a;
        }
        eax = ebx + esi + 1u;
    }
    t4 = rd32(COW_IMG(0x1045ec24u)) + 0x52u;
    wr32(sp0 + 0x14u, t4);
    if ((int32_t)edi <= 1) goto L_10034613;
    ebx = COW_IMG(0x1045f064u);
    ebp = 1u;
    edi = 0x40u;
L_1003447f: ;
    if (rd32(COW_IMG(0x1045ec28u) + ebp * 4u) == 0u)
    {
        t5 = rd8(rd32(sp0 + 0x14u));
        g->edx = rd32(COW_IMG(0x1045ec20u));
        t6 = rd32(COW_IMG(0x1045ec20u));
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, COW_IMG(0x10027b30u), edi + t6, 1, ebx + 0x1cu);
        t7 = g->edx;
        t8 = edi + rd32(COW_IMG(0x1045ec20u));
        cow_thiscall(g, COW_IMG(0x10032fa0u), ebx, 1, t8);
        g->edx = ebx + 0x10u;
        cow_thiscall(g, COW_IMG(0x10027cf0u), edi + rd32(COW_IMG(0x1045ec20u)), 1, ebx + 0x10u);
        t9 = g->edx;
        t10 = t5 * 0x40u + rd32(COW_IMG(0x1045ec20u));
        g->edx = t9;
        cow_thiscall(g, COW_IMG(0x10027d10u), edi + rd32(COW_IMG(0x1045ec20u)), 1, t10);
        t11 = g->edx;
        wr32(COW_IMG(0x1045ec28u) + ebp * 4u, 1u);
        edx = t11;
    }
    t12 = rd32(sp0 + 0x14u) + 0x1eu;
    wr32(sp0 + 0x14u, t12);
    if ((int32_t)(ebp + 1u) < (int32_t)loc_4)
    {
        ebx = ebx + 0x34u;
        ebp = ebp + 1u;
        edi = edi + 0x40u;
        goto L_1003447f;
    }
    eax = loc_4;
    g->edx = edx;
    return eax;
L_10034507: ;
    if (rd32(sp0 + 0x14u) == 0u)
    {
        eax = rd32(sp0 + 0x14u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(sp0 + 0x14u);
        edx = in_edx;
        ebx = 0xfffffffeu - eax;
        esi = eax + 2u;
L_10034519: ;
        if (rd8(esi) == 0xffu)
        {
            eax = (eax & 0xffffff00u) | rd8(esi);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(esi);
            t13 = COW_IMG(0x1045f04cu) + (uint32_t)(int8_t)eax * 0x34u;
            t14 = COW_IMG(0x1045f04cu) + (uint32_t)(int8_t)rd8(esi - 2u) * 0x34u;
            g->eax = t14;
            g->edx = (uint32_t)(int8_t)rd8(esi - 2u) * 0xdu;
            t15 = rd8(esi - 2u);
            g->esp = sp0 - 0x14u;
            t16 = cow_cdecl(g, COW_IMG(0x10027310u), 2, t14, t13);
            t17 = g->edx;
            eax = t16;
            edx = t17;
        }
        if ((int32_t)(ebx + esi + 1u) < 2)
        {
            esi = esi + 1u;
            goto L_10034519;
        }
    }
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t18 = cow_thiscall(g, COW_IMG(0x10027b30u), rd32(COW_IMG(0x1045ec20u)), 1, COW_IMG(0x1045f04cu));
    g->edx = rd32(COW_IMG(0x1045ec20u));
    t19 = rd32(COW_IMG(0x1045ec20u));
    t20 = cow_thiscall(g, COW_IMG(0x10032fa0u), COW_IMG(0x1045f030u), 1, t19);
    t21 = g->edx;
    g->edx = t21;
    cow_thiscall(g, COW_IMG(0x10027cf0u), rd32(COW_IMG(0x1045ec20u)), 1, COW_IMG(0x1045f040u));
    t22 = g->edx;
    g->eax = arg1;
    g->edx = t22;
    t23 = cow_thiscall(g, COW_IMG(0x10027d10u), rd32(COW_IMG(0x1045ec20u)), 1, arg1);
    t24 = g->edx;
    if ((int32_t)edi <= 1)
    {
        eax = t23;
        edx = t24;
    }
    else
    {
        ebp = rd32(COW_IMG(0x1045ec24u)) + 0x52u;
        wr32(sp0 + 0x14u, edi - 1u);
        ebx = COW_IMG(0x1045f064u);
        esi = 0x40u;
L_100345b1: ;
        t25 = rd8(ebp);
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, COW_IMG(0x10027b30u), esi + rd32(COW_IMG(0x1045ec20u)), 1, ebx + 0x1cu);
        t26 = esi + rd32(COW_IMG(0x1045ec20u));
        g->eax = t26;
        t27 = cow_thiscall(g, COW_IMG(0x10032fa0u), ebx, 1, t26);
        g->edx = rd32(COW_IMG(0x1045ec20u));
        t28 = rd32(COW_IMG(0x1045ec20u));
        cow_thiscall(g, COW_IMG(0x10027cf0u), esi + t28, 1, ebx + 0x10u);
        t29 = g->edx;
        t30 = t25 * 0x40u + rd32(COW_IMG(0x1045ec20u));
        g->edx = t29;
        cow_thiscall(g, COW_IMG(0x10027d10u), esi + rd32(COW_IMG(0x1045ec20u)), 1, t30);
        t31 = g->edx;
        t32 = rd32(sp0 + 0x14u) - 1u;
        t33 = rd32(sp0 + 0x14u);
        wr32(sp0 + 0x14u, t32);
        if (t33 != 1u)
        {
            ebx = ebx + 0x34u;
            ebp = ebp + 0x1eu;
            esi = esi + 0x40u;
            goto L_100345b1;
        }
        eax = t32;
        edx = t31;
    }
L_10034613: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100343c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100343c0(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
