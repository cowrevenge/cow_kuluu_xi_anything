/* f_0x101e4980 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101e4980(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x10663520u)) == 0u) goto L_101e49c6;
    eax = rd32(COW_IMG(0x10663520u));
    if ((uint32_t)(int16_t)arg1 - 1u > 3u) goto L_101e49af;
    t1 = rd32(COW_IMG(0x101e49ccu) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x101e499du: goto L_101e499d;
    case 0x101e49a3u: goto L_101e49a3;
    case 0x101e49a9u: goto L_101e49a9;
    case 0x101e49afu: goto L_101e49af;
    default: rt_fatal(g, COW_IMG(0x101e4996u), "switch");
    }
    return;
L_101e499d: ;
    wr8(eax + 0x78u, 1u);
L_101e49b2: ;
    t2 = rd32(rd32(COW_IMG(0x10663520u)) + 8u);
    g->esp = sp0;
    cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), 0u, 2, t2, 0u);
L_101e49c6: ;
    return;
L_101e49a3: ;
    wr8(eax + 0x78u, 2u);
    goto L_101e49b2;
L_101e49a9: ;
    wr8(eax + 0x78u, 5u);
    goto L_101e49b2;
L_101e49af: ;
    wr8(eax + 0x78u, 0u);
    goto L_101e49b2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e4980(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101e4980(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
