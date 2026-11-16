/* f_0x101a1a20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101a1a20(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    edx = in_edx;
    ebx = 0x14u;
    edi = self + 4u;
L_101a1a2d: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x101a16e0u), edi, 0);
    t1 = g->edx;
    if (ebx != 1u)
    {
        edx = t1;
        ebx = ebx - 1u;
        edi = edi + 0x17cu;
        goto L_101a1a2d;
    }
    edx = t1;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x101a16e0u), self + 0x2048u, 0);
    t2 = g->edx;
    cow_thiscall(g, COW_IMG(0x101a16e0u), self + 0x21d0u, 0);
    wr32(self, COW_IMG(0x103372f4u));
    wr32(self + 0x1db4u, 0u);
    wr32(self + 0x1db8u, 0u);
    wr32(self + 0x1dbcu, 0u);
    wr32(self + 0x1dc0u, 0u);
    wr8(self + 0x1dc4u, 0u);
    wr8(self + 0x1dc5u, 0u);
    wr8(self + 0x235cu, 0u);
    wr8(self + 0x235du, 0u);
    wr8(self + 0x235eu, 0u);
    wr8(self + 0x235fu, 0u);
    eax = self + 0x1dc6u;
    ecx = 0x28u;
L_101a1aa6: ;
    wr8(eax, 0u);
    if (ecx != 1u)
    {
        eax = eax + 0x10u;
        ecx = ecx - 1u;
        goto L_101a1aa6;
    }
    eax = eax + 0x10u;
    if (rd32(COW_IMG(0x10662db0u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662db0u));
        g->eax = eax;
        g->edx = self + 0x1dbcu;
        g->esp = sp0 - 0xcu;
        t3 = cow_thiscall(g, COW_IMG(0x101b9f20u), ecx, 8, 1u, 0u, COW_IMG(0x1037aa40u), self + 0x1dbcu, 4u, COW_IMG(0x101a23d0u), self, 1u);
        t4 = g->edx;
        g->edx = t4;
        cow_thiscall(g, COW_IMG(0x101b9f20u), rd32(COW_IMG(0x10662db0u)), 8, 1u, 0u, COW_IMG(0x1037aa38u), self + 0x1dc6u, 0x140u, COW_IMG(0x101a2410u), self, 1u);
        t5 = g->edx;
        cow_thiscall(g, COW_IMG(0x101b9f20u), rd32(COW_IMG(0x10662db0u)), 8, 1u, 0u, COW_IMG(0x1037aa2cu), self + 0x1f06u, 0x140u, COW_IMG(0x101a2440u), self, 1u);
    }
    wr32(self + 0x21c4u, 0xffffffffu);
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a1a20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a1a20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
