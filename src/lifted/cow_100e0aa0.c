/* f_0x100e0aa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100e0aa0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if (rd8(rd32(COW_IMG(0x104dfd98u)) + 0x1a698u) == 1u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        edx = in_edx;
        goto L_100e0b0c;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    g->eax = eax;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x100dc080u), 0);
    if (t1 <= rd32(rd32(COW_IMG(0x104dfd98u)) + 0x1a694u) + 0x3cu)
    {
        eax = t1;
        edx = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x1a694u) + 0x3cu;
        goto L_100e0b0c;
    }
    eax = t1;
    ecx = rd32(COW_IMG(0x104dfd98u));
    edx = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x1a694u) + 0x3cu;
    esi = t1;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x3cu, 1u, 1u);
    t3 = g->edx;
    if (t2 != 0u)
    {
        eax = t2;
        goto L_100e0adf;
    }
    eax = t2;
    edx = t3;
    g->edx = edx;
    return eax & 0xffffff00u;
L_100e0adf: ;
    wr32(eax + 4u, 0u);
    wr32(eax + 8u, 0u);
    wr32(eax + 0xcu, 0u);
    wr32(eax + 0x10u, 0u);
    wr32(eax + 0x14u, 0u);
    wr8(eax + 0x18u, 0u);
    g->edx = eax + 4u;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, eax, 0x1cu, 0u);
    t4 = g->edx;
    t5 = rd32(COW_IMG(0x104dfd98u));
    wr32(t5 + 0x1a694u, esi);
    eax = t5;
    edx = t4;
L_100e0b0c: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e0aa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e0aa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
