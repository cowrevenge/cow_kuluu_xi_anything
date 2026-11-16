/* f_0x101321d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101321d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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

    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        edx = in_edx;
        goto L_10132261;
    }
    eax = rd32(self + 8u);
    t1 = (eax & 0xffff0000u) | rd16(eax + 0x4cu);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_stdcall(g, COW_IMG(0x10131680u), 1, t1);
    t3 = g->edx;
    if ((int16_t)t2 < 0)
    {
        eax = t2;
        edx = t3;
        ebx = 0u;
        ebp = 0u;
        edi = (uint32_t)(int16_t)t2;
    }
    else
    {
        eax = t2;
        edx = t3;
        edi = (uint32_t)(int16_t)t2;
        if (rd8(edi + self + 0x22u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(edi + self + 0x22u);
            ebx = 0u;
            ebp = 0u;
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(edi + self + 0x22u);
            t4 = rd32(edi * 4u + self + 0x34u);
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t5 = cow_cdecl(g, COW_IMG(0x100eb490u), 2, t4, eax);
            t6 = g->edx;
            if (t5 == 0u)
            {
                eax = t5;
                edx = t6;
                ebx = t5;
                ebp = 0u;
            }
            else
            {
                eax = t5;
                edx = t6;
                ebx = t5;
                ebp = rd8(ebx + 2u);
            }
        }
    }
    if ((uint8_t)arg1 != 0u) goto L_10132230;
    if ((uint16_t)ebp != rd16(self + 0x18u)) goto L_10132230;
    if (rd32(edi * 4u + self + 0x34u) == rd32(self + 0x14u))
    {
        eax = rd32(self + 0x14u);
        edx = rd32(edi * 4u + self + 0x34u);
        goto L_10132261;
    }
    edx = rd32(edi * 4u + self + 0x34u);
L_10132230: ;
    wr16(self + 0x18u, (uint16_t)ebp);
    t7 = rd32(edi * 4u + self + 0x34u);
    wr32(self + 0x14u, t7);
    if (ebx == 0u)
    {
        eax = t7;
        ecx = rd32(COW_IMG(0x10578204u));
        goto L_10132258;
    }
    eax = t7;
    ecx = rd32(COW_IMG(0x10578204u));
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t8 = cow_call_regs(g, COW_IMG(0x1013e2f0u), eax, ecx, g->edx, 0, 2, ebx, 1u);
    t9 = g->edx;
    g->edx = t9;
    return t8;
L_10132258: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t10 = cow_call_regs(g, COW_IMG(0x1013e2f0u), eax, ecx, g->edx, 0, 2, 0u, 0u);
    t11 = g->edx;
    eax = t10;
    edx = t11;
L_10132261: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101321d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101321d0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
