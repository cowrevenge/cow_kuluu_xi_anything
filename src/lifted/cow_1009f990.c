/* f_0x1009f990 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=3 */
uint32_t cow_fn_1009f990(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd16(arg3 + 8u);
    g->ecx = t1;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_call_regs(g, COW_IMG(0x10086fc0u), in_eax, g->ecx, g->edx, 1, 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 != 0u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        goto L_1009f9aa;
    }
    eax = t2;
    edx = t4;
    g->edx = edx;
    return eax;
L_1009f9aa: ;
    if (rd32(COW_IMG(0x10480af0u) + ecx * 4u) != 0u)
    {
        ecx = rd32(COW_IMG(0x10480af0u) + ecx * 4u);
        if (rd32(ecx + 0x78u) != rd32(arg3 + 4u))
        {
            eax = rd32(arg3 + 4u);
            edx = rd32(ecx + 0x78u);
        }
        else
        {
            eax = rd32(arg3 + 4u);
            edx = rd32(ecx + 0x78u);
            t5 = (edx & 0xffff0000u) | rd16(arg3 + 0xeu);
            t6 = (t5 & 0xffffff00u) | rd8(arg3 + 0xcu);
            t7 = (t6 & 0xffff0000u) | rd16(arg3 + 0xau);
            g->esp = sp0 - 4u;
            cow_call_regs(g, COW_IMG(0x1009f430u), eax, ecx, t7, 0, 4, eax, t7, t6, t5);
            t8 = g->edx;
            if (rd32(rd32(COW_IMG(0x10480af0u) + rd16(arg3 + 8u) * 4u) + 0x120u) >> 1u & 1u)
            {
                eax = rd32(COW_IMG(0x10480af0u) + rd16(arg3 + 8u) * 4u);
                edx = t8;
            }
            else
            {
                eax = rd32(COW_IMG(0x10480af0u) + rd16(arg3 + 8u) * 4u);
                t9 = (uint32_t)(int8_t)rd8(arg3 + 0xdu);
                wr32(eax + 0x16cu, t9);
                edx = t9;
            }
        }
    }
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1009f990(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1009f990(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
