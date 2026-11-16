/* f_0x10120f30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10120f30(Guest* g)
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
        goto L_10120fd6;
    }
    ecx = rd32(COW_IMG(0x104e1d44u));
    if (arg1 > 5u)
    {
        eax = arg1;
        goto L_10120fd6;
    }
    t1 = rd32(COW_IMG(0x10120fdcu) + arg1 * 4u);
    switch (t1 - RD)
    {
    case 0x10120f52u: goto L_10120f52;
    case 0x10120f5au: goto L_10120f5a;
    case 0x10120f62u: goto L_10120f62;
    case 0x10120f90u: goto L_10120f90;
    case 0x10120fb6u: goto L_10120fb6;
    case 0x10120fbeu: goto L_10120fbe;
    default: rt_fatal(g, COW_IMG(0x10120f4bu), "switch");
    }
    return 0;
L_10120f52: ;
    ecx = rd32(ecx + 0x238u);
L_10120fc4: ;
    if ((ecx & 8u) == 0u) goto L_10120fd3;
    return 1u;
L_10120f5a: ;
    ecx = rd32(ecx + 0x228u);
    goto L_10120fc4;
L_10120f62: ;
    if ((rd32(ecx + 0x238u) & 8u) == 0u)
    {
        eax = rd32(ecx + 0x238u) & 8u;
        eax = eax & 0xffffff00u;
    }
    else
    {
        eax = rd32(ecx + 0x238u) & 8u;
        eax = (eax & 0xffffff00u) | 1u;
    }
    t3 = rd32(ecx + 0x228u) & 8u;
    wr32(ecx + 0x228u, t3);
    wr32(ecx + 0x22cu, 0u);
    return eax;
L_10120f90: ;
    t2 = rd32(ecx + 0x228u) & 8u;
    if (t2 == 0u)
    {
        eax = t2;
        edx = ecx + 0x228u;
        ecx = t2;
        goto L_10120fad;
    }
    eax = t2;
    edx = ecx + 0x228u;
    ecx = t2;
    wr32(edx + 4u, 0u);
    wr32(edx, ecx);
    return (eax & 0xffffff00u) | 1u;
L_10120fad: ;
    wr32(edx + 4u, 0u);
    wr32(edx, ecx);
    return eax & 0xffffff00u;
L_10120fb6: ;
    ecx = rd32(ecx + 0x220u);
    goto L_10120fc4;
L_10120fbe: ;
    ecx = rd32(ecx + 0x230u);
    goto L_10120fc4;
L_10120fd3: ;
    return 0u;
L_10120fd6: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10120f30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10120f30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
