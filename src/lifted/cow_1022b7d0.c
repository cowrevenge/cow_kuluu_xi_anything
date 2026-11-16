/* f_0x1022b7d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1022b7d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((rd32(arg1 + 0x5cu) & 1u << (rd32(COW_IMG(0x10485640u)) & 0x1fu)) == 0u)
    {
        eax = rd32(COW_IMG(0x10485640u));
        ecx = (uint8_t)rd32(COW_IMG(0x10485640u));
        edx = 1u << (rd32(COW_IMG(0x10485640u)) & 0x1fu);
        goto L_1022b827;
    }
    eax = rd32(COW_IMG(0x10485640u));
    ecx = (uint8_t)rd32(COW_IMG(0x10485640u));
    edx = 1u << (rd32(COW_IMG(0x10485640u)) & 0x1fu);
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x100991f0u), eax, g->ecx, g->edx, 1, 0);
    if (t1 == 0u)
    {
        eax = t1;
        edx = rd32(COW_IMG(0x10485640u));
        esi = 0u;
    }
    else
    {
        eax = t1;
        edx = rd32(COW_IMG(0x10485640u));
        esi = rd16(eax + (uint8_t)edx * 6u + 8u);
    }
    if ((uint8_t)(edx >> 8u) < 0x63u) goto L_1022b849;
    if (rd16(arg1 + (uint8_t)edx * 2u + 0xeu) > (uint16_t)esi) goto L_1022b849;
L_1022b822: ;
    return (eax & 0xffffff00u) | 1u;
L_1022b827: ;
    if (rd16(arg1 + ecx * 2u + 0xeu) <= (uint8_t)(eax >> 8u)) goto L_1022b822;
    if (rd16(arg1 + rd8(COW_IMG(0x10485642u)) * 2u + 0xeu) <= rd8(COW_IMG(0x10485643u)))
    {
        eax = rd8(COW_IMG(0x10485642u));
        goto L_1022b822;
    }
    eax = rd8(COW_IMG(0x10485642u));
L_1022b849: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022b7d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022b7d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
