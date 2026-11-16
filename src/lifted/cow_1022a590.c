/* f_0x1022a590 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1022a590(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(self + 0x88u) == 1u) goto L_1022a609;
    eax = (in_eax & 0xffffff00u) | rd8(self + 0x88u);
    if ((uint8_t)eax == 2u) goto L_1022a609;
    if (rd32(self + 0x78u) != 0u)
    {
        eax = rd32(self + 0x78u);
        goto L_1022a5b6;
    }
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10221b80u), self, 1, arg1);
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_1022a5b6: ;
    if ((int32_t)arg1 >= (int32_t)rd32(self + 0x40u))
    {
        edx = 0u;
        edi = 0u;
    }
    else
    {
        ebx = rd32(self + 0x40u);
        ecx = arg1 * 8u + eax;
        edx = 0u;
        edi = 0u;
L_1022a5cb: ;
        if (edi == 8u) goto L_1022a600;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t3 = cow_thiscall(g, COW_IMG(0x102295c0u), ecx, 0);
        t4 = g->ecx;
        t5 = g->edx;
        if ((int32_t)(t5 + (uint32_t)(int16_t)rd16(t3 + 2u)) >= (int16_t)(rd16(self + 0x82u) - rd16(self + 0x7eu)))
        {
            edx = t5 + (uint32_t)(int16_t)rd16(t3 + 2u);
            goto L_1022a600;
        }
        ecx = t4;
        edx = t5 + (uint32_t)(int16_t)rd16(t3 + 2u);
        if ((int32_t)(arg1 + edi + 1u) < (int32_t)ebx)
        {
            ecx = ecx + 8u;
            edx = edx + rd32(self + 0x84u);
            edi = edi + 1u;
            goto L_1022a5cb;
        }
        edx = edx + rd32(self + 0x84u);
        edi = edi + 1u;
    }
L_1022a600: ;
    g->edx = edx;
    return edi;
L_1022a609: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t6 = cow_thiscall(g, COW_IMG(0x10221b80u), self, 1, arg1);
    t7 = g->edx;
    g->edx = t7;
    return t6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022a590(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022a590(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
