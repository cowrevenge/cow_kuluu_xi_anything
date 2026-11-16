/* f_0x10120e60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10120e60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x104e1d44u)) == 0u)
    {
        eax = in_eax;
        goto L_10120f06;
    }
    ecx = rd32(COW_IMG(0x104e1d44u));
    if (arg1 > 5u)
    {
        eax = arg1;
        goto L_10120f06;
    }
    t1 = rd32(COW_IMG(0x10120f0cu) + arg1 * 4u);
    switch (t1 - RD)
    {
    case 0x10120e82u: goto L_10120e82;
    case 0x10120e8au: goto L_10120e8a;
    case 0x10120e92u: goto L_10120e92;
    case 0x10120ec0u: goto L_10120ec0;
    case 0x10120ee6u: goto L_10120ee6;
    case 0x10120eeeu: goto L_10120eee;
    default: rt_fatal(g, COW_IMG(0x10120e7bu), "switch");
    }
    return 0;
L_10120e82: ;
    ecx = rd32(ecx + 0x238u);
L_10120ef4: ;
    if (!(ecx & 1u)) goto L_10120f03;
    return 1u;
L_10120e8a: ;
    ecx = rd32(ecx + 0x228u);
    goto L_10120ef4;
L_10120e92: ;
    if (!(rd32(ecx + 0x238u) & 1u))
    {
        eax = rd32(ecx + 0x238u) & 1u;
        eax = eax & 0xffffff00u;
    }
    else
    {
        eax = rd32(ecx + 0x238u) & 1u;
        eax = (eax & 0xffffff00u) | 1u;
    }
    t3 = rd32(ecx + 0x228u) & 1u;
    wr32(ecx + 0x228u, t3);
    wr32(ecx + 0x22cu, 0u);
    return eax;
L_10120ec0: ;
    t2 = rd32(ecx + 0x228u) & 1u;
    if (t2 == 0u)
    {
        eax = t2;
        edx = ecx + 0x228u;
        ecx = t2;
        goto L_10120edd;
    }
    eax = t2;
    edx = ecx + 0x228u;
    ecx = t2;
    wr32(edx + 4u, 0u);
    wr32(edx, ecx);
    return (eax & 0xffffff00u) | 1u;
L_10120edd: ;
    wr32(edx + 4u, 0u);
    wr32(edx, ecx);
    return eax & 0xffffff00u;
L_10120ee6: ;
    ecx = rd32(ecx + 0x220u);
    goto L_10120ef4;
L_10120eee: ;
    ecx = rd32(ecx + 0x230u);
    goto L_10120ef4;
L_10120f03: ;
    return 0u;
L_10120f06: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10120e60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10120e60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
