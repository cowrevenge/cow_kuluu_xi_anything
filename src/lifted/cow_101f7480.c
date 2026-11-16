/* f_0x101f7480 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101f7480(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t zf;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int8_t)rd8(COW_IMG(0x103821f6u) + arg1 * 0xeu) >= 0)
    {
        ecx = (arg1 & 0xffffff00u) | rd8(COW_IMG(0x103821f6u) + arg1 * 0xeu);
        zf = rd8(COW_IMG(0x103821f6u) + arg1 * 0xeu) == 0u;
        goto L_101f74a0;
    }
    return 0x17fu;
L_101f74a0: ;
    if (!zf) goto L_101f74a8;
    return 0x180u;
L_101f74a8: ;
    if ((rd8(COW_IMG(0x103821f4u) + arg1 * 0xeu) & 0xf0u) == 0u) goto L_101f74d7;
    eax = rd8(COW_IMG(0x103821f4u) + arg1 * 0xeu) & 0xf0u;
    if (eax == 0x10u) goto L_101f74ce;
    if (eax == 0x20u) goto L_101f74c5;
    return 0x180u;
L_101f74c5: ;
    return (uint32_t)(int8_t)ecx + 0x8fdu;
L_101f74ce: ;
    return (uint32_t)(int8_t)ecx + 0x73fu;
L_101f74d7: ;
    return (uint32_t)(int8_t)ecx + 0x180u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f7480(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f7480(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
