/* f_0x10260150 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10260150(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, rd32(COW_IMG(0x10329400u)), self, 0);
    if ((int32_t)(t1 * 0x2710u - rd32(self + 0xfcu) * 0x2710u) < (int32_t)(rd32(self + 0xf4u) * 2u))
    {
        eax = rd32(self + 0xf4u);
        ecx = t1 * 0x2710u - rd32(self + 0xfcu) * 0x2710u;
        goto L_10260187;
    }
    eax = rd32(self + 0xf4u);
    ecx = t1 * 0x2710u - rd32(self + 0xfcu) * 0x2710u;
    if ((int32_t)ecx >= (int32_t)(rd32(self + 0xf8u) * 2u))
    {
        edx = rd32(self + 0xf8u) * 2u;
        goto L_1026019b;
    }
L_10260187: ;
    t2 = (uint32_t)((int32_t)(eax * 3u + ecx + ((uint32_t)((int32_t)(eax * 3u + ecx) >> 0x1fu) & 3u)) >> 2u);
    wr32(self + 0xf4u, t2);
    edx = (uint32_t)((int32_t)(eax * 3u + ecx) >> 0x1fu) & 3u;
    eax = t2;
L_1026019b: ;
    wr32(self + 0xf8u, ecx);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t3 = cow_fastcall(g, COW_IMG(0x102600b0u), self, edx, 0);
    t4 = g->edx;
    g->edx = t4;
    return t3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10260150(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10260150(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
