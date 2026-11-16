/* f_0x101eae00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101eae00(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x100e76c0u), 1, arg3);
    wr32(arg2 + 0x68u, (uint8_t)t1);
    if ((uint8_t)t1 > 4u) goto L_101eae44;
    eax = (uint8_t)t1;
    t2 = rd32(COW_IMG(0x101eae64u) + eax * 4u);
    switch (t2 - RD)
    {
    case 0x101eae28u: goto L_101eae28;
    case 0x101eae2fu: goto L_101eae2f;
    case 0x101eae36u: goto L_101eae36;
    case 0x101eae3du: goto L_101eae3d;
    case 0x101eae44u: goto L_101eae44;
    default: rt_fatal(g, COW_IMG(0x101eae21u), "switch");
    }
    return;
L_101eae28: ;
    eax = 1u;
L_101eae46: ;
    t3 = rd32(eax * 4u + self + 0x68u);
    g->esp = sp0 - 4u;
    cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, t3, 4, 0u, 0xeu, t3, 0x80808080u);
    return;
L_101eae2f: ;
    eax = 3u;
    goto L_101eae46;
L_101eae36: ;
    eax = 4u;
    goto L_101eae46;
L_101eae3d: ;
    eax = 5u;
    goto L_101eae46;
L_101eae44: ;
    eax = 0u;
    goto L_101eae46;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101eae00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101eae00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
