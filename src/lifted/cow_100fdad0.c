/* f_0x100fdad0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100fdad0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)(uint16_t)arg3 >= 768) goto L_100fdb01;
    t1 = cow_divs(g, (uint16_t)arg3, 3u);
    t2 = cow_mods(g, (uint16_t)arg3, 3u);
    g->esp = sp0 - 4u;
    t3 = cow_cdecl(g, COW_IMG(0x100fda90u), 2, arg1, t1);
    if ((int32_t)t3 <= (int32_t)t2)
    {
        eax = t3;
        goto L_100fdb39;
    }
    eax = t3;
    return (eax & 0xffffff00u) | 1u;
L_100fdb01: ;
    if ((int32_t)(uint16_t)arg3 >= 864)
    {
        eax = (uint16_t)arg3;
        goto L_100fdb39;
    }
    t4 = (uint16_t)arg3 - 0x300u;
    if ((int32_t)(t4 & 0x8000001fu) >= 0)
    {
        eax = t4;
        ecx = t4 & 0x8000001fu;
    }
    else
    {
        eax = t4;
        ecx = t4 & 0x8000001fu;
        ecx = (ecx - 1u | 0xffffffe0u) + 1u;
    }
    if ((rd32(arg2 + (uint32_t)((int32_t)(eax + ((uint32_t)((int32_t)eax >> 0x1fu) & 0x1fu)) >> 5u) * 4u) & 1u << (ecx & 0x1fu)) == 0u)
    {
        eax = (uint32_t)((int32_t)(eax + ((uint32_t)((int32_t)eax >> 0x1fu) & 0x1fu)) >> 5u);
        goto L_100fdb39;
    }
    eax = (uint32_t)((int32_t)(eax + ((uint32_t)((int32_t)eax >> 0x1fu) & 0x1fu)) >> 5u);
    return (eax & 0xffffff00u) | 1u;
L_100fdb39: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fdad0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100fdad0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
