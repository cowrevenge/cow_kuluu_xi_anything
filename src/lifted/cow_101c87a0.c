/* f_0x101c87a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101c87a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd8(rd32(sp0 + 8u)) < 0x41u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(rd32(sp0 + 8u));
        ecx = rd32(sp0 + 8u);
        goto L_101c87ca;
    }
    eax = (in_eax & 0xffffff00u) | rd8(rd32(sp0 + 8u));
    ecx = rd32(sp0 + 8u);
    if ((uint8_t)eax > 0x5au) goto L_101c87ca;
    wr8(arg3, (uint8_t)(rd8(arg1 + (uint8_t)eax - 0x40u) + 0x40u));
    return 1u;
L_101c87ca: ;
    if ((uint8_t)eax < 0x61u) goto L_101c87ee;
    if ((uint8_t)eax > 0x7au) goto L_101c87ee;
    wr8(arg3, (uint8_t)(rd8(arg1 + (uint8_t)eax - 0x60u) + 0x40u));
    return 1u;
L_101c87ee: ;
    if ((uint8_t)eax != 0x85u) goto L_101c888b;
    t1 = rd8(ecx + 1u);
    wr8(sp0 + 8u, (uint8_t)t1);
    if ((uint8_t)t1 < 0x9fu)
    {
        ecx = (ecx & 0xffffff00u) | t1;
        goto L_101c8827;
    }
    ecx = (ecx & 0xffffff00u) | t1;
    if ((uint8_t)ecx > 0xbeu) goto L_101c8827;
    wr8(arg3, (uint8_t)(rd8(arg1 + (uint8_t)rd32(sp0 + 8u) - 0x7fu) + 0x40u));
    return 2u;
L_101c8827: ;
    if ((uint8_t)ecx < 0xbfu) goto L_101c8855;
    if ((uint8_t)ecx > 0xdeu) goto L_101c8855;
    wr8(arg3, (uint8_t)(rd8(arg1 + (uint8_t)rd32(sp0 + 8u) - 0x9fu) + 0x40u));
    return 2u;
L_101c8855: ;
    if ((uint8_t)ecx != 0x5cu) goto L_101c8870;
    wr8(arg3, (uint8_t)(rd8(arg1 + 0x40u) + 0x40u));
    return 2u;
L_101c8870: ;
    if ((uint8_t)ecx != 0x4cu) goto L_101c888b;
    wr8(arg3, (uint8_t)(rd8(arg1 + 0x41u) + 0x40u));
    return 2u;
L_101c888b: ;
    wr8(arg3, (uint8_t)eax);
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c87a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c87a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
