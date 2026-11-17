/* f_0x10024900 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10024900(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)(rd16(rd32(self + 0x42u)) + rd16(rd32(self + 0x42u) + 2u)) <= 0)
    {
        eax = rd32(self + 0x42u);
        edx = 0u;
        esi = rd16(rd32(self + 0x42u));
        edi = rd32(self + 0x36u);
    }
    else
    {
        edi = rd32(self + 0x36u);
        eax = arg1 + 0x34u;
        edx = 0u;
L_10024926: ;
        wr32(eax, 0x3f800000u);
        wr32(eax - 4u, 0u);
        wr32(eax + 4u, 0u);
        if ((int32_t)(edx + 1u) < (int32_t)(rd16(rd32(self + 0x42u)) + rd16(rd32(self + 0x42u) + 2u)))
        {
            eax = eax + 0x3cu;
            edx = edx + 1u;
            goto L_10024926;
        }
        eax = eax + 0x3cu;
        edx = edx + 1u;
        esi = rd16(rd32(self + 0x42u)) + rd16(rd32(self + 0x42u) + 2u);
    }
    if (rd16(edi) == 0xffffu) goto L_10024a21;
    eax = (eax & 0xffff0000u) | rd16(edi);
L_1002495d: ;
    if ((int8_t)(eax >> 8u) >= 0)
    {
        if ((int32_t)(uint16_t)eax > 17235)
        {
            eax = (uint16_t)eax;
            esi = (esi & 0xffff0000u) | rd16(edi + 2u);
            if (eax == 0x5453u)
            {
                g->esi = esi;
                g->edi = edi;
                g->esp = sp0 - 0x10u;
                t5 = cow_call_regs(g, COW_IMG(0x10024e30u), eax, g->ecx, g->edx, 0, 3, esi, edi + 4u, arg1);
                eax = t5;
                edx = (uint16_t)esi * 5u;
                edi = edi + (uint16_t)esi * 0xau + 0x18u;
                esi = (uint16_t)esi;
            }
        }
        else
        {
            esi = (esi & 0xffff0000u) | rd16(edi + 2u);
            zf = (uint16_t)eax == 0x4353u;
            eax = (uint16_t)eax;
            if (zf)
            {
                g->esi = esi;
                g->edi = edi;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t3 = cow_call_regs(g, COW_IMG(0x10024c50u), edi + 4u, g->ecx, g->edx, 0, 3, esi, edi + 4u, arg1);
                t4 = g->edx;
                eax = t3;
                edx = t4;
                edi = edi + (uint16_t)esi * 2u + 0xcu;
                esi = (uint16_t)esi;
            }
            else
            {
                if (eax == 0x43u)
                {
                    g->esi = esi;
                    g->eax = eax;
                    g->esp = sp0 - 0x10u;
                    t2 = cow_thiscall(g, COW_IMG(0x10024a70u), self, 3, esi, edi + 4u, arg1);
                    eax = t2;
                    edx = (uint16_t)esi * 5u;
                    edi = edi + (uint16_t)esi * 0xau + 4u;
                    esi = (uint16_t)esi;
                }
                else
                {
                    if (eax == 0x54u)
                    {
                        g->esi = esi;
                        g->edx = edi + 4u;
                        g->esp = sp0 - 0x10u;
                        cow_thiscall(g, COW_IMG(0x10024b60u), self, 3, esi, edi + 4u, arg1);
                        t1 = g->edx;
                        eax = (uint16_t)esi * 0xfu;
                        edx = t1;
                        edi = edi + (uint16_t)esi * 0x1eu + 4u;
                        esi = (uint16_t)esi;
                    }
                }
            }
        }
    }
    else
    {
        if ((eax >> 4u & 0xfu) == 0u)
        {
            eax = eax >> 4u & 0xfu;
            edi = edi + 0x12u;
        }
        else
        {
            eax = eax >> 4u & 0xfu;
            if (eax != 1u)
            {
                eax = eax - 1u;
            }
            else
            {
                eax = eax - 1u;
                edi = edi + 0x2eu;
            }
        }
    }
    if (rd16(edi) != 0xffffu)
    {
        eax = (eax & 0xffff0000u) | rd16(edi);
        goto L_1002495d;
    }
L_10024a21: ;
    if ((int32_t)(rd16(rd32(self + 0x42u)) + rd16(rd32(self + 0x42u) + 2u)) > 0)
    {
        eax = rd32(self + 0x42u);
        ecx = rd16(rd32(self + 0x42u)) + rd16(rd32(self + 0x42u) + 2u);
        edx = rd16(rd32(self + 0x42u));
        esi = 0u;
        edi = arg1 + 0x30u;
L_10024a3a: ;
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x100274b0u), eax, g->ecx, g->edx, 1, 1, edi);
        if ((int32_t)(esi + 1u) < (int32_t)(rd16(rd32(self + 0x42u)) + rd16(rd32(self + 0x42u) + 2u)))
        {
            eax = rd32(self + 0x42u);
            ecx = rd16(rd32(self + 0x42u)) + rd16(rd32(self + 0x42u) + 2u);
            edx = rd16(rd32(self + 0x42u));
            esi = esi + 1u;
            edi = edi + 0x3cu;
            goto L_10024a3a;
        }
    }
    g->esi = in_esi;
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10024900(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10024900(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
