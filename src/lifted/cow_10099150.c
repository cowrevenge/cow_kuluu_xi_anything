/* f_0x10099150 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10099150(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd16(arg3 + 0x84u) < 4u)
    {
        eax = (in_eax & 0xffff0000u) | rd16(arg3 + 0x84u);
        goto L_10099166;
    }
    eax = (in_eax & 0xffff0000u) | rd16(arg3 + 0x84u);
    return eax & 0xffffff00u;
L_10099166: ;
    t1 = (uint16_t)eax << 7u;
    eax = 0u;
    ecx = t1;
    edx = in_edx;
L_10099172: ;
    t2 = rd8(arg3 + eax + 4u);
    wr8(COW_IMG(0x104805e0u) + eax + ecx, (uint8_t)t2);
    if ((int32_t)(eax + 1u) < 128)
    {
        eax = eax + 1u;
        edx = (edx & 0xffffff00u) | t2;
        goto L_10099172;
    }
    edx = (edx & 0xffffff00u) | t2;
    if (rd16(arg3 + 0x84u) == 0u) goto L_100991b5;
    eax = rd16(arg3 + 0x84u);
    if (eax != 3u) goto L_100991c1;
    t3 = rd32(COW_IMG(0x104807ecu)) | 4u;
    t4 = rd32(COW_IMG(0x104807e8u));
    wr32(COW_IMG(0x104807ecu), t3);
    if (t4 == 0u)
    {
        eax = t4;
        edx = t3;
        goto L_100991c1;
    }
    eax = t4;
    edx = t3;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, eax, ecx, 0);
    t6 = g->edx;
    g->edx = t6;
    return (t5 & 0xffffff00u) | 1u;
L_100991b5: ;
    t7 = (rd32(COW_IMG(0x104807ecu)) & 0xffffff00u) | (rd32(COW_IMG(0x104807ecu)) & 0xfbu);
    wr32(COW_IMG(0x104807ecu), t7);
    eax = t7;
L_100991c1: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10099150(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10099150(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
