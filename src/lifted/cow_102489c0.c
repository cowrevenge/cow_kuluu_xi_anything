/* f_0x102489c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102489c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    ecx = self;
    edx = in_edx;
    ebx = rd32(COW_IMG(0x10329104u));
    esi = rd32(COW_IMG(0x106690c8u));
L_102489d5: ;
    if (rd32(esi + 4u) != 0u)
    {
        edi = rd32(esi + 4u);
        if ((int32_t)rd32(esi + 0x6cu) <= 0)
        {
            ecx = 0u;
        }
        else
        {
            eax = rd32(esi + 0x6cu);
            t1 = rd32(esi + 0x70u);
            t2 = rd32(esi + 0x74u);
            wr32(esi + 0x6cu, eax - 1u);
            wr32(esi + 0x70u, t1 + t2);
            if ((int32_t)(eax - 1u) >= 1)
            {
                ecx = t1 + t2;
                edx = t1;
            }
            else
            {
                ecx = t1 + t2;
                edx = t1;
                if (rd32(esi + 0x78u) == 1u)
                {
                    wr32(esi + 0x48u, 0u);
                }
            }
            if ((rd8(esi + 0xd0u) & 0xc8u) == 0u)
            {
                wr32(esi + 0xccu, (uint32_t)((int32_t)ecx >> 0xcu));
            }
            ecx = 1u;
        }
        if ((int32_t)rd32(esi + 0x7cu) > 0)
        {
            eax = rd32(esi + 0x7cu);
            t3 = rd32(esi + 0x80u);
            wr32(esi + 0x7cu, eax - 1u);
            t4 = t3 + rd32(esi + 0x84u);
            wr32(esi + 0x80u, t4);
            ecx = ecx + 1u;
            edx = t4;
        }
        if (ecx != 0u)
        {
            t5 = (uint32_t)((int32_t)rd32(esi + 0x80u) >> 0xcu);
            wr32(sp0 - 4u, t5);
            wr32(sp0 - 0x1cu, sp0 - 8u);
            wr32(sp0 - 0x20u, sp0 - 4u);
            t6 = (uint32_t)((int32_t)rd32(esi + 0x70u) >> 0xcu);
            wr32(sp0 - 8u, t6);
            g->eax = sp0 - 8u;
            g->ecx = sp0 - 4u;
            g->esp = sp0 - 0x14u;
            t7 = cow_cdecl(g, COW_IMG(0x10248920u), 3, sp0 - 4u, sp0 - 8u, in_edi);
            t8 = g->ecx;
            t9 = rd32(sp0 - 8u);
            wr32(sp0 - 0x24u, t9);
            wr32(sp0 - 0x28u, edi);
            g->edx = t9;
            g->esp = sp0 - 0x20u;
            cow_cdecl(g, COW_IMG(0x10246900u), 2, edi, t9);
            t10 = g->edx;
            t11 = rd32(sp0 - 4u);
            wr32(sp0 - 0x2cu, t11);
            t12 = rd32(esi + 4u);
            wr32(sp0 - 0x30u, t12);
            g->ecx = t12;
            g->edx = t10;
            g->esp = sp0 - 0x28u;
            cow_cdecl(g, COW_IMG(0x10246930u), 2, t12, t11);
            t13 = g->ecx;
            t14 = g->edx;
            ecx = t13;
            edx = t14;
        }
    }
    if (rd32(esi + 0x3cu) != 0u)
    {
        eax = rd32(esi + 0x3cu);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x20u, eax);
        g->eax = eax;
        g->esp = sp0 - 0x18u;
        t15 = cow_thiscall(g, rd32(COW_IMG(0x103291c8u)), ecx, 2, eax, 0u);
        t16 = g->ecx;
        if (t15 != 0u)
        {
            ecx = t16;
        }
        else
        {
            eax = t15;
            ecx = t16;
            t17 = rd32(esi + 0x3cu);
            wr32(sp0 - 0x1cu, t17);
            g->edx = t17;
            g->esp = sp0 - 0x18u;
            cow_thiscall(g, ebx, ecx, 1, t17);
            t18 = g->ecx;
            t19 = g->edx;
            t20 = rd32(esi + 4u);
            wr32(esi + 0x3cu, 0u);
            if (t20 == 0u)
            {
                ecx = t18;
            }
            else
            {
                eax = t20;
                edx = t19;
                wr32(sp0 - 0x1cu, eax);
                g->edx = edx;
                t21 = rd32(eax);
                g->esp = sp0 - 0x18u;
                cow_thiscall(g, rd32(t21 + 0x48u), t21, 1, eax);
                t22 = g->ecx;
                t23 = g->edx;
                if (rd32(esi + 4u) == 0u)
                {
                    ecx = t22;
                    edx = t23;
                }
                else
                {
                    eax = rd32(esi + 4u);
                    ecx = t22;
                    wr32(sp0 - 0x1cu, eax);
                    g->edx = rd32(eax);
                    t24 = rd32(eax);
                    g->esp = sp0 - 0x18u;
                    cow_thiscall(g, rd32(t24 + 8u), ecx, 1, eax);
                    t25 = g->ecx;
                    t26 = g->edx;
                    wr32(esi + 4u, 0u);
                    ecx = t25;
                    edx = t26;
                }
                if (rd32(esi) != 0u)
                {
                    eax = rd32(esi);
                    wr32(sp0 - 0x1cu, eax);
                    t27 = rd32(eax);
                    g->esp = sp0 - 0x18u;
                    cow_thiscall(g, rd32(t27 + 8u), t27, 1, eax);
                    t28 = g->ecx;
                    wr32(esi, 0u);
                    ecx = t28;
                }
            }
            wr32(esi + 0xc0u, 0u);
        }
    }
    if (esi + 0xf4u < rd32(COW_IMG(0x106690c8u)) + 0x1310u)
    {
        edx = rd32(COW_IMG(0x106690c8u)) + 0x1310u;
        esi = esi + 0xf4u;
        goto L_102489d5;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102489c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102489c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
