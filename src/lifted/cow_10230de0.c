/* f_0x10230de0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10230de0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 0u) goto L_10230def;
    eax = in_eax;
L_10230dea: ;
    return eax & 0xffffff00u;
L_10230def: ;
    ebx = 0u;
    cf = 0u;
    pf = PARITY(0u);
    zf = 1u;
    sf = 0u;
    of = 0u;
L_10230df1: ;
    if ((1u << (ebx & 0x1fu) & rd32(arg1) & 0xffffffu) == 0u)
    {
        eax = 1u << (ebx & 0x1fu) & rd32(arg1);
        goto L_10230e16;
    }
    eax = 1u << (ebx & 0x1fu) & rd32(arg1);
    ecx = ebx;
    edx = rd32(arg1);
    t1 = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)ebx + 1u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t2 = cow_cdecl(g, COW_IMG(0x100f0fb0u), 1, t1);
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        goto L_10230dea;
    }
    eax = t2;
L_10230e16: ;
    if ((int32_t)(ebx + 1u) < 22)
    {
        cf = ebx + 1u < 0x16u;
        pf = PARITY((uint8_t)(ebx - 0x15u));
        zf = ebx == 0x15u;
        sf = (int32_t)(ebx - 0x15u) < 0;
        of = ((ebx + 1u ^ 0x16u) & (ebx + 1u ^ ebx - 0x15u)) >> 0x1fu;
        ebx = ebx + 1u;
        goto L_10230df1;
    }
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10230de0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10230de0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
