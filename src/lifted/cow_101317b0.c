/* f_0x101317b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101317b0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 == 0u)
    {
        eax = arg1;
        goto L_101317f0;
    }
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1015bc40u), rd32(COW_IMG(0x10621808u)), 1, rd16(arg1));
    if (t1 == 0u)
    {
        eax = t1;
        goto L_101317f0;
    }
    eax = t1;
    ecx = 0u;
    edx = rd16(eax + 0x14u);
    eax = arg2;
    cf = 0u;
    pf = PARITY(0u);
    zf = 1u;
    sf = 0u;
    of = 0u;
L_101317da: ;
    if ((edx & 1u << (ecx & 0x1fu)) == 0u) goto L_101317ea;
    if (eax == 0u) goto L_101317f7;
    eax = eax - 1u;
L_101317ea: ;
    if ((int32_t)(ecx + 1u) < 16)
    {
        cf = ecx + 1u < 0x10u;
        pf = PARITY((uint8_t)(ecx - 0xfu));
        zf = ecx == 0xfu;
        sf = (int32_t)(ecx - 0xfu) < 0;
        of = ((ecx + 1u ^ 0x10u) & (ecx + 1u ^ ecx - 0xfu)) >> 0x1fu;
        ecx = ecx + 1u;
        goto L_101317da;
    }
L_101317f0: ;
    return 0xffffffffu;
L_101317f7: ;
    return rd8(COW_IMG(0x1036f734u) + ecx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101317b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101317b0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
