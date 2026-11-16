/* f_0x102a81f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102a81f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    wr32(COW_IMG(0x109a2888u), 0u);
    wr32(COW_IMG(0x109aa890u), 0u);
    if (rd32(arg1 + 0x620u) == 1u)
    {
        eax = rd32(arg1 + 0x620u);
        goto L_102a826c;
    }
    eax = rd32(arg1 + 0x620u);
    if (eax == 2u) goto L_102a8241;
    g->ecx = 1u;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103be434u));
    t1 = g->ecx;
    t2 = g->edx;
    t3 = rd32(arg1 + 0x620u);
    g->eax = t3;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be4ccu), t3);
    return t4 & 0xffffff00u;
L_102a8241: ;
    if (rd32(arg1 + 0x61cu) != 1u)
    {
        ecx = 1u;
    }
    else
    {
        ecx = rd16(arg1 + 0x624u);
    }
    wr16(COW_IMG(0x109aaaa8u), (uint16_t)ecx);
    t5 = rd32(arg1 + 0x62cu);
    wr32(COW_IMG(0x109a2888u), arg2);
    wr32(COW_IMG(0x109aa890u), t5);
    eax = arg2;
L_102a826c: ;
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a81f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102a81f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
