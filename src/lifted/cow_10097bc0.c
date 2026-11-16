/* f_0x10097bc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_10097bc0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t zf;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;

    if (rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40d82u) == 0u)
    {
        ecx = rd32(COW_IMG(0x104dfd98u));
        goto L_10097bd7;
    }
    ecx = rd32(COW_IMG(0x104dfd98u));
    return (in_eax & 0xffffff00u) | rd8(ecx + 0x40db4u);
L_10097bd7: ;
    if ((int32_t)rd16(ecx + 0x40d80u) > 288)
    {
        eax = rd16(ecx + 0x40d80u);
        goto L_10097c42;
    }
    eax = rd16(ecx + 0x40d80u);
    zf = rd16(ecx + 0x40d80u) == 0x120u;
    if (zf) goto L_10097c6f;
    if (eax - 0xc7u > 0x3bu)
    {
        eax = eax - 0xc7u;
        goto L_10097ca3;
    }
    eax = eax - 0xc7u;
    t1 = rd32(COW_IMG(0x10097ca8u) + rd8(COW_IMG(0x10097cc4u) + eax) * 4u);
    switch (t1 - RD)
    {
    case 0x10097c0au: edx = rd8(COW_IMG(0x10097cc4u) + eax); goto L_10097c0a;
    case 0x10097c1bu: edx = rd8(COW_IMG(0x10097cc4u) + eax); goto L_10097c1b;
    case 0x10097c28u: edx = rd8(COW_IMG(0x10097cc4u) + eax); goto L_10097c28;
    case 0x10097c35u: edx = rd8(COW_IMG(0x10097cc4u) + eax); goto L_10097c35;
    case 0x10097c55u: edx = rd8(COW_IMG(0x10097cc4u) + eax); goto L_10097c55;
    case 0x10097c62u: edx = rd8(COW_IMG(0x10097cc4u) + eax); goto L_10097c62;
    case 0x10097ca3u: goto L_10097ca3;
    default: rt_fatal(g, COW_IMG(0x10097c03u), "switch");
    }
    return 0;
L_10097c0a: ;
    if (rd8(ecx + 0x40db4u) != 4u)
    {
        eax = (eax & 0xffffff00u) | 4u;
        goto L_10097ca3;
    }
    eax = (eax & 0xffffff00u) | 4u;
    return eax;
L_10097c1b: ;
    if (rd8(ecx + 0x40db4u) != 5u)
    {
        eax = (eax & 0xffffff00u) | 5u;
        goto L_10097ca3;
    }
    eax = (eax & 0xffffff00u) | 5u;
    return eax;
L_10097c28: ;
    if (rd8(ecx + 0x40db4u) != 7u)
    {
        eax = (eax & 0xffffff00u) | 7u;
        goto L_10097ca3;
    }
    eax = (eax & 0xffffff00u) | 7u;
    return eax;
L_10097c35: ;
    if (rd8(ecx + 0x40db4u) != 8u)
    {
        eax = (eax & 0xffffff00u) | 8u;
        goto L_10097ca3;
    }
    eax = (eax & 0xffffff00u) | 8u;
    return eax;
L_10097c42: ;
    if ((int32_t)eax > 291) goto L_10097c7c;
    zf = eax == 0x123u;
    if (zf) goto L_10097c6f;
    if (eax == 0x121u)
    {
        eax = eax - 0x121u;
        edx = in_edx;
        goto L_10097c62;
    }
    eax = eax - 0x121u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_10097ca3;
    }
    eax = eax - 1u;
    edx = in_edx;
L_10097c55: ;
    if (rd8(ecx + 0x40db4u) != 2u)
    {
        eax = (eax & 0xffffff00u) | 2u;
        goto L_10097ca3;
    }
    eax = (eax & 0xffffff00u) | 2u;
    return eax;
L_10097c62: ;
    if (rd8(ecx + 0x40db4u) != 1u)
    {
        eax = (eax & 0xffffff00u) | 1u;
        goto L_10097ca3;
    }
    eax = (eax & 0xffffff00u) | 1u;
    return eax;
L_10097c6f: ;
    if (rd8(ecx + 0x40db4u) != 3u)
    {
        eax = (eax & 0xffffff00u) | 3u;
        goto L_10097ca3;
    }
    eax = (eax & 0xffffff00u) | 3u;
    return eax;
L_10097c7c: ;
    if (eax == 0x124u) goto L_10097c97;
    if (eax != 0x2e9u) goto L_10097ca3;
    if (rd8(ecx + 0x40db4u) != 6u)
    {
        eax = (eax & 0xffffff00u) | 6u;
        goto L_10097ca3;
    }
    eax = (eax & 0xffffff00u) | 6u;
    return eax;
L_10097c97: ;
    if (rd8(ecx + 0x40db4u) == 9u)
    {
        eax = (eax & 0xffffff00u) | 9u;
        goto L_10097ca5;
    }
    eax = (eax & 0xffffff00u) | 9u;
L_10097ca3: ;
    eax = eax & 0xffffff00u;
L_10097ca5: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10097bc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10097bc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
