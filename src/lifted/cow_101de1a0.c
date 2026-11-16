/* f_0x101de1a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101de1a0(Guest* g)
{
    double d12;
    double d13;
    double d14;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint8_t)arg1 == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        if (rd32(COW_IMG(0x10578204u)) == 0u)
        {
            ecx = self;
            edx = in_edx;
        }
        else
        {
            if (rd32(self + 8u) == 0u)
            {
                ecx = self;
                edx = rd32(self + 8u);
            }
            else
            {
                edx = rd32(self + 8u);
                if ((int32_t)(uint8_t)arg2 >= (int16_t)rd16(self + 4u))
                {
                    ecx = (uint8_t)arg2;
                }
                else
                {
                    t1 = rd32(edx + (uint8_t)arg2 * 0x54u + 0x48u);
                    g->edx = edx;
                    g->esp = sp0 - 0x24u;
                    t2 = cow_cdecl(g, COW_IMG(0x100e0300u), 1, t1);
                    t3 = g->edx;
                    if (t2 != 0u)
                    {
                        eax = t2;
                        ecx = rd32(COW_IMG(0x10578204u));
                        t6 = (eax & 0xffff0000u) | rd16(eax);
                        g->edx = eax + 0x10u;
                        g->esp = sp0 - 0x24u;
                        cow_thiscall(g, COW_IMG(0x1013e200u), ecx, 4, t6, eax + 0x10u, 0u, 0u);
                        t7 = g->ecx;
                        t8 = g->edx;
                        ecx = t7;
                        edx = t8;
                    }
                    else
                    {
                        eax = t2;
                        ecx = rd32(COW_IMG(0x10578204u));
                        edx = t3;
                        g->edx = edx;
                        g->esp = sp0 - 0x24u;
                        cow_call_regs(g, COW_IMG(0x1013e2f0u), eax, ecx, g->edx, 0, 2, 0u, 0u);
                        t4 = g->ecx;
                        t5 = g->edx;
                        ecx = t4;
                        edx = t5;
                    }
                }
            }
        }
    }
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t9 = cow_stdcall(g, COW_IMG(0x100fc2e0u), 0);
    t10 = g->edx;
    if ((uint16_t)t9 == 0u)
    {
        eax = t9;
        edx = t10;
        goto L_101de273;
    }
    eax = t9;
    edx = t10;
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u) == 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u);
        goto L_101de273;
    }
    eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u);
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 0x14u) * 4u) == 0u) goto L_101de273;
    ecx = rd32(COW_IMG(0x10480af0u) + rd16(self + 0x14u) * 4u);
    t11 = rd32(ecx + 0xcu);
    d12 = (double)(float)fr(g, (double)rdf32(eax + 4u) - (double)rdf32(ecx + 4u));
    d13 = fr(g, (double)rdf32(eax + 0xcu) - cow_bits2f(t11));
    d14 = fr(g, fr(g, d13 * d13) + fr(g, d12 * d12));
    if ((cow_fsw(g, d14, (double)rdf32(COW_IMG(0x10338ed0u)), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d14, (double)rdf32(COW_IMG(0x10338ed0u)), 1u) & 0x4100u;
        edx = t11;
        goto L_101de27e;
    }
    eax = cow_fsw(g, d14, (double)rdf32(COW_IMG(0x10338ed0u)), 1u) & 0x4100u;
    edx = t11;
L_101de273: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t15 = cow_thiscall(g, COW_IMG(0x10210840u), rd32(COW_IMG(0x10664508u)), 0);
    t16 = g->edx;
    eax = t15;
    edx = t16;
L_101de27e: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101de1a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101de1a0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
