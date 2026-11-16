/* f_0x10087070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10087070(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(COW_IMG(0x10487e48u)) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10487e48u));
        goto L_1008707c;
    }
    eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10487e48u));
    return (eax & 0xffffff00u) | 1u;
L_1008707c: ;
    if (rd16(COW_IMG(0x10485f7au)) == 0u)
    {
        edx = in_edx;
        goto L_100870dd;
    }
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_call_regs(g, COW_IMG(0x101cc4f0u), eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t3;
        goto L_100870dd;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    if ((arg1 & 4u) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)arg1;
        goto L_100870ac;
    }
    ecx = (ecx & 0xffffff00u) | (uint8_t)arg1;
    if ((rd32(eax + 0x128u) >> 0xfu & 1u) != 1u)
    {
        edx = (rd32(eax + 0x128u) >> 0xfu & 0xffffff00u) | (rd32(eax + 0x128u) >> 0xfu & 1u);
        goto L_100870ac;
    }
    edx = (rd32(eax + 0x128u) >> 0xfu & 0xffffff00u) | (rd32(eax + 0x128u) >> 0xfu & 1u);
    g->edx = edx;
    return (eax & 0xffffff00u) | (uint8_t)edx;
L_100870ac: ;
    if (ecx & 1u) goto L_100870c5;
    if ((rd32(eax + 0x12cu) >> 0xdu & 1u) != 1u)
    {
        edx = (rd32(eax + 0x12cu) >> 0xdu & 0xffffff00u) | (rd32(eax + 0x12cu) >> 0xdu & 1u);
        goto L_100870c5;
    }
    edx = (rd32(eax + 0x12cu) >> 0xdu & 0xffffff00u) | (rd32(eax + 0x12cu) >> 0xdu & 1u);
    g->edx = edx;
    return (eax & 0xffffff00u) | (uint8_t)edx;
L_100870c5: ;
    if ((ecx & 2u) != 0u) goto L_100870dd;
    g->edx = edx;
    g->esp = sp0;
    t4 = cow_thiscall(g, COW_IMG(0x100956c0u), eax, 1, 0xffu);
    t5 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        eax = t4;
        edx = t5;
        goto L_100870dd;
    }
    eax = t4;
    edx = t5;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100870dd: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10087070(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10087070(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
