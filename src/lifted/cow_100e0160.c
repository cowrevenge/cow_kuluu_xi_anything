/* f_0x100e0160 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100e0160(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = in_eax;
        goto L_100e018d;
    }
    edx = rd32(COW_IMG(0x104dfd98u));
    edi = edx + 0x3aeb0u;
    eax = 0u;
    ecx = 0x3ccu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x105u, 0u, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_100e0191;
    }
    eax = t1;
L_100e018d: ;
    return eax & 0xffffff00u;
L_100e0191: ;
    wr16(eax + 8u, (uint16_t)arg2);
    wr32(eax + 4u, arg1);
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, eax, 0xcu, 0u);
    t4 = rd32(COW_IMG(0x104dfd98u));
    wr16(t4 + 0x3bde4u, (uint16_t)arg2);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x3bde0u, arg1);
    return (t4 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e0160(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e0160(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
