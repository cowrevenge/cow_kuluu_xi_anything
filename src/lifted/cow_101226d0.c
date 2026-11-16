/* f_0x101226d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101226d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 > 5u) goto L_101227b7;
    t1 = rd32(COW_IMG(0x101227bcu) + arg1 * 4u);
    switch (t1 - RD)
    {
    case 0x101226e4u: goto L_101226e4;
    case 0x101226f4u: goto L_101226f4;
    case 0x10122705u: goto L_10122705;
    case 0x1012273fu: goto L_1012273f;
    case 0x1012277au: goto L_1012277a;
    case 0x10122797u: goto L_10122797;
    default: rt_fatal(g, COW_IMG(0x101226ddu), "switch");
    }
    return 0;
L_101226e4: ;
    eax = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x238u);
L_101227a3: ;
    if ((eax & 0x200000u) == 0u) goto L_101227b4;
    return 1u;
L_101226f4: ;
    eax = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x228u);
    goto L_101227a3;
L_10122705: ;
    if ((rd32(rd32(COW_IMG(0x104e1d44u)) + 0x238u) & 0x200000u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x238u) & 0x200000u;
        ecx = rd32(COW_IMG(0x104e1d44u));
        eax = eax & 0xffffff00u;
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x238u) & 0x200000u;
        ecx = rd32(COW_IMG(0x104e1d44u));
        eax = (eax & 0xffffff00u) | 1u;
    }
    t3 = rd32(ecx + 0x228u);
    wr32(ecx + 0x22cu, 0u);
    wr32(ecx + 0x228u, t3 & 0x200000u);
    return eax;
L_1012273f: ;
    t2 = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x228u) & 0x200000u;
    if (t2 == 0u)
    {
        eax = t2;
        ecx = t2;
        edx = rd32(COW_IMG(0x104e1d44u));
        goto L_1012276a;
    }
    eax = t2;
    ecx = t2;
    edx = rd32(COW_IMG(0x104e1d44u));
    wr32(edx + 0x22cu, 0u);
    wr32(edx + 0x228u, ecx);
    return (eax & 0xffffff00u) | 1u;
L_1012276a: ;
    wr32(edx + 0x22cu, 0u);
    wr32(edx + 0x228u, ecx);
    return eax & 0xffffff00u;
L_1012277a: ;
    if ((rd32(rd32(COW_IMG(0x104e1d44u)) + 0x220u) & 0x200000u) == 0u) goto L_101227b4;
    return 1u;
L_10122797: ;
    eax = rd32(rd32(COW_IMG(0x104e1d44u)) + 0x230u);
    goto L_101227a3;
L_101227b4: ;
    return 0u;
L_101227b7: ;
    return arg1 & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101226d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101226d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
