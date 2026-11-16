/* f_0x10097ee0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10097ee0(Guest* g)
{
    uint32_t ecx;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)(arg1 & 0x8000001fu) >= 0)
    {
        ecx = arg1 & 0x8000001fu;
        pf = PARITY(arg1 & 0x1fu);
        zf = (arg1 & 0x8000001fu) == 0u;
        sf = (int32_t)(arg1 & 0x8000001fu) < 0;
        of = 0u;
    }
    else
    {
        ecx = ((arg1 & 0x8000001fu) - 1u | 0xffffffe0u) + 1u;
        pf = PARITY((uint8_t)(((arg1 & 0x8000001fu) - 1u | 0xffffffe0u) + 1u));
        zf = ((arg1 & 0x8000001fu) - 1u | 0xffffffe0u) + 1u == 0u;
        sf = (int32_t)(((arg1 & 0x8000001fu) - 1u | 0xffffffe0u) + 1u) < 0;
        of = ((arg1 & 0x8000001fu) - 1u | 0xffffffe0u) + 1u == 0x80000000u;
    }
    t1 = 1u << (ecx & 0x1fu);
    g->edx = t1;
    g->esp = sp0;
    t2 = cow_cdecl(g, COW_IMG(0x10097eb0u), 2, (uint32_t)((int32_t)arg1 >> 5u), t1);
    t3 = g->edx;
    g->edx = t3;
    return t2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10097ee0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10097ee0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
