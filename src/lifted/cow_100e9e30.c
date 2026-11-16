/* f_0x100e9e30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_100e9e30(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(COW_IMG(0x104dfd98u));
    t2 = rd32(rd32(sp0 + 8u));
    wr8(sp0 + 8u, 0u);
    edx = t1;
    edi = t2;
L_100e9e4d: ;
    if ((uint8_t)arg4 != 5u)
    {
        eax = (uint8_t)arg4;
    }
    else
    {
        eax = 0u;
    }
    if (rd32(edx + (uint8_t)eax * 0x8c4u + (uint8_t)rd32(sp0 + 8u) * 0x70u + 0x57ecu) == 0u)
    {
        eax = edx + (uint8_t)eax * 0x8c4u + (uint8_t)rd32(sp0 + 8u) * 0x70u + 0x57d8u;
        goto L_100e9eb8;
    }
    eax = edx + (uint8_t)eax * 0x8c4u + (uint8_t)rd32(sp0 + 8u) * 0x70u + 0x57d8u;
    if ((edi & rd32(eax + 0x34u)) == 0u) goto L_100e9eb8;
    ecx = rd32(eax + 0x34u);
    if (arg5 == 0u) goto L_100e9eb2;
    if (arg5 != (ecx & 3u)) goto L_100e9eb8;
L_100e9eb2: ;
    if (arg6 != eax) goto L_100e9ecd;
L_100e9eb8: ;
    t3 = rd8(sp0 + 8u);
    wr8(sp0 + 8u, (uint8_t)(t3 + 1u));
    if ((uint8_t)(t3 + 1u) < 0x14u) goto L_100e9e4d;
    eax = (eax & 0xffffff00u) | (uint8_t)(t3 + 1u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_100e9ecd: ;
    wr32(arg1, eax);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e9e30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e9e30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
