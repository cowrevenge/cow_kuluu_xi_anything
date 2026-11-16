/* f_0x100ad8f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=3 */
uint32_t cow_fn_100ad8f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = cow_call_regs(g, COW_IMG(0x10193850u), in_eax, g->ecx, g->edx, 1, 1, 0x13u);
    t2 = rd8(COW_IMG(0x1035cae0u) + (uint16_t)arg1);
    wr8(arg3, (uint8_t)t2);
    if ((uint8_t)t2 == 0u)
    {
        eax = t1;
        goto L_100ad933;
    }
    eax = t1;
    ecx = (arg1 & 0xff00u) | t2;
    if ((uint8_t)arg2 != 1u)
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)arg2;
        goto L_100ad924;
    }
    ecx = (ecx & 0xffffff00u) | (uint8_t)arg2;
    if (eax != 0u) goto L_100ad930;
    g->edx = arg3;
    return (eax & 0xffffff00u) | (uint8_t)ecx;
L_100ad924: ;
    if ((uint8_t)ecx != 0u) goto L_100ad930;
    if (eax != 2u) goto L_100ad930;
    g->edx = arg3;
    return (eax & 0xffffff00u) | 1u;
L_100ad930: ;
    g->edx = arg3;
    return eax & 0xffffff00u;
L_100ad933: ;
    g->edx = arg3;
    return (eax & 0xffffff00u) | (uint8_t)arg2 != 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ad8f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ad8f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
