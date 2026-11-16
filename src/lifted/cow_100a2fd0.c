/* f_0x100a2fd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_100a2fd0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 == 0u) goto L_100a3038;
    wr8(arg1, (uint8_t)arg2);
    wr8(arg1 + 2u, (uint8_t)arg3);
    wr8(arg1 + 3u, (uint8_t)arg4);
    wr8(arg1 + 1u, 0u);
    wr32(arg1 + 4u, 0u);
    wr32(arg1 + 8u, 0u);
    wr32(arg1 + 0x18u, 0u);
    edi = arg1 + 0x1cu;
    eax = 0u;
    ecx = 9u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(arg1 + 0xcu, 0u);
    if (arg5 == 0u) goto L_100a3032;
    if ((int32_t)arg6 <= 0) goto L_100a3032;
    wr32(arg1 + 0x10u, arg6);
    wr32(arg1 + 0x14u, arg5);
    edi = arg5;
    ecx = arg6 >> 2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = arg6 & 3u;
    while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    return;
L_100a3032: ;
    wr32(arg1 + 0x10u, 0u);
    wr32(arg1 + 0x14u, 0u);
L_100a3038: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a2fd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100a2fd0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
