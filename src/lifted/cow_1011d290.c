/* f_0x1011d290 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_1011d290(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 36u);

    wr8(sp0 - 0x20u, 1u);
    wr8(sp0 - 0x1fu, 2u);
    wr8(sp0 - 0x1eu, 3u);
    wr8(sp0 - 0x1du, 4u);
    wr8(sp0 - 0x1cu, 5u);
    wr8(sp0 - 0x1bu, 6u);
    wr8(sp0 - 0x1au, 7u);
    wr8(sp0 - 0x19u, 0xau);
    wr8(sp0 - 0x18u, 0xbu);
    wr8(sp0 - 0x17u, 0xcu);
    wr8(sp0 - 0x16u, 0xdu);
    wr8(sp0 - 0x15u, 0xeu);
    wr8(sp0 - 0x14u, 0xfu);
    wr8(sp0 - 0x13u, 0x10u);
    wr8(sp0 - 0x12u, 0x11u);
    wr8(sp0 - 0x11u, 0x12u);
    wr8(sp0 - 0x10u, 0x13u);
    wr8(sp0 - 0xfu, 0x14u);
    wr8(sp0 - 0xeu, 0x15u);
    wr8(sp0 - 0xdu, 0x16u);
    wr8(sp0 - 0xcu, 0x17u);
    wr8(sp0 - 0xbu, 0x18u);
    wr8(sp0 - 0xau, 0x19u);
    wr8(sp0 - 9u, 0x1au);
    wr8(sp0 - 8u, 0x1cu);
    wr8(sp0 - 7u, 0x1du);
    wr8(sp0 - 6u, 0x1eu);
    wr8(sp0 - 5u, 0x1fu);
    wr8(sp0 - 4u, 0x7fu);
    wr8(sp0 - 3u, 0u);
    eax = (in_eax & 0xffffff00u) | 1u;
    ecx = sp0 - 0x20u;
L_1011d333: ;
    if ((uint8_t)eax == (uint8_t)arg1) goto L_1011d345;
    if (rd8(ecx + 1u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(ecx + 1u);
        ecx = ecx + 1u;
        goto L_1011d333;
    }
    eax = (eax & 0xffffff00u) | rd8(ecx + 1u);
    return (eax & 0xffffff00u) | 1u;
L_1011d345: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011d290(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011d290(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
