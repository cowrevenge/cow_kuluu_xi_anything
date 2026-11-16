/* f_0x10151040 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10151040(Guest* g)
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x10126320u), self + 4u, 0);
    t2 = g->edx;
    wr16(self + 0xeu, 0xffffu);
    wr32(self + 8u, 0u);
    wr8(self + 0xcu, 1u);
    wr16(self + 0x18u, 0u);
    wr16(self + 0x1au, 0u);
    wr16(self + 0x1cu, 0u);
    wr16(self + 0x1eu, 0u);
    wr32(self, COW_IMG(0x10335060u));
    g->edx = t2;
    cow_thiscall(g, COW_IMG(0x10151140u), self, 0);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(self + 0x28u, 0u);
    wr32(self + 0x74u, 0u);
    wr32(self + 0x78u, 0u);
    wr32(self + 0xc4u, 0u);
    if (rd32(COW_IMG(0x10578488u)) != 0u) goto L_101510b3;
    ecx = t3;
    edx = t4;
    g->esp = sp0;
    t5 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 4u, in_edi, in_esi);
    if (t5 == 0u) goto L_101510ad;
    eax = t5;
    wr32(eax, COW_IMG(0x10334ff8u));
    wr32(COW_IMG(0x10578488u), eax);
    return self;
L_101510ad: ;
    wr32(COW_IMG(0x10578488u), 0u);
L_101510b3: ;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10151040(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10151040(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
