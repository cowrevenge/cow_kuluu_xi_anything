/* f_0x10248b00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10248b00(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t3;
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
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 0xcu, in_esi);
    if ((int32_t)rd32(rd32(COW_IMG(0x106690b8u)) + 0x94u) < 0)
    {
        ecx = self;
        edx = in_edx;
        esi = rd32(COW_IMG(0x106690b8u));
        goto L_10248b9b;
    }
    esi = rd32(COW_IMG(0x106690b8u));
    if ((int32_t)rd32(esi + 0x48u) <= 0)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(esi + 0x48u);
        t1 = rd32(esi + 0x50u);
        t2 = rd32(esi + 0x4cu);
        wr32(esi + 0x48u, eax - 1u);
        wr32(esi + 0x4cu, t1 + t2);
        if ((int32_t)(eax - 1u) >= 1)
        {
            eax = t1 + t2;
        }
        else
        {
            eax = t1 + t2;
            if (rd32(esi + 0x54u) == 1u)
            {
                wr32(esi + 0x94u, 0xffffffffu);
            }
        }
        wr32(sp0 - 4u, 0x40u);
        wr32(sp0 - 0x10u, sp0 - 8u);
        wr32(sp0 - 0x14u, sp0 - 4u);
        t3 = (uint32_t)((int32_t)(rd32(COW_IMG(0x103889f0u) + (uint32_t)(int8_t)rd8(esi + 0xb8u) * 4u) * (uint32_t)((int32_t)eax >> 0xcu)) >> 0xcu);
        wr32(sp0 - 8u, t3);
        g->ecx = sp0 - 4u;
        g->edx = t3;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10248920u), 3, sp0 - 4u, sp0 - 8u, in_esi);
        t4 = g->ecx;
        t5 = g->edx;
        if (rd32(esi + 4u) == 0u)
        {
            ecx = t4;
            edx = t5;
        }
        else
        {
            eax = rd32(esi + 4u);
            ecx = t4;
            t6 = rd32(sp0 - 8u);
            wr32(sp0 - 0x10u, t6);
            wr32(sp0 - 0x14u, eax);
            g->ecx = ecx;
            g->edx = t6;
            g->esp = sp0 - 0xcu;
            cow_cdecl(g, COW_IMG(0x10246900u), 2, eax, t6);
            t7 = g->ecx;
            t8 = g->edx;
            ecx = t7;
            edx = t8;
        }
    }
    if ((int32_t)rd32(esi + 0x94u) >= 0) goto L_10248bf6;
L_10248b9b: ;
    if (rd32(esi + 4u) != 0u)
    {
        wr32(sp0 - 0x10u, 0u);
        t9 = rd32(esi + 0x38u);
        wr32(sp0 - 0x14u, t9);
        g->eax = t9;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t10 = cow_thiscall(g, rd32(COW_IMG(0x103291c8u)), ecx, 2, t9, 0u);
        t11 = g->ecx;
        t12 = g->edx;
        if (t10 == 0u)
        {
            ecx = t11;
            edx = t12;
            if (rd32(esi + 4u) == 0u)
            {
                eax = rd32(esi + 4u);
            }
            else
            {
                eax = rd32(esi + 4u);
                wr32(sp0 - 0x10u, eax);
                g->edx = edx;
                t13 = rd32(eax);
                g->esp = sp0 - 0xcu;
                cow_thiscall(g, rd32(t13 + 0x48u), t13, 1, eax);
                t14 = g->ecx;
                t15 = g->edx;
                if (rd32(esi + 4u) == 0u)
                {
                    ecx = t14;
                    edx = t15;
                }
                else
                {
                    eax = rd32(esi + 4u);
                    ecx = t14;
                    wr32(sp0 - 0x10u, eax);
                    g->edx = rd32(eax);
                    t16 = rd32(eax);
                    g->esp = sp0 - 0xcu;
                    cow_thiscall(g, rd32(t16 + 8u), ecx, 1, eax);
                    t17 = g->ecx;
                    t18 = g->edx;
                    wr32(esi + 4u, 0u);
                    ecx = t17;
                    edx = t18;
                }
                if (rd32(esi) == 0u)
                {
                    eax = rd32(esi);
                }
                else
                {
                    eax = rd32(esi);
                    wr32(sp0 - 0x10u, eax);
                    g->eax = eax;
                    t19 = rd32(eax);
                    g->esp = sp0 - 0xcu;
                    t20 = cow_thiscall(g, rd32(t19 + 8u), t19, 1, eax);
                    t21 = g->ecx;
                    wr32(esi, 0u);
                    eax = t20;
                    ecx = t21;
                }
            }
            t22 = rd32(esi + 0x38u);
            wr32(sp0 - 0x10u, t22);
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, rd32(COW_IMG(0x10329104u)), ecx, 1, t22);
            wr32(esi + 0x38u, 0u);
        }
    }
L_10248bf6: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10248b00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10248b00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
