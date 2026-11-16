/* f_0x100dbcb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100dbcb0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x10492db4u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10492db4u));
        goto L_100dbcbc;
    }
    eax = rd32(COW_IMG(0x10492db4u));
    return eax & 0xffffff00u;
L_100dbcbc: ;
    wr8(eax + 0x2ee1u, 3u);
    if (rd8(rd32(COW_IMG(0x10492db4u)) + 0x2ee0u) == 0u)
    {
        eax = rd32(COW_IMG(0x10492db4u));
    }
    else
    {
        eax = rd32(COW_IMG(0x10492db4u));
        ecx = (self & 0xffffff00u) | rd8(rd32(COW_IMG(0x10492db4u)) + 0x2ee0u);
        edx = in_edx;
        ebx = rd32(COW_IMG(0x10329104u));
        esi = 0u;
        edi = rd32(COW_IMG(0x103291c8u));
L_100dbce3: ;
        t1 = rd32(eax + esi * 4u);
        g->eax = t1;
        g->esp = sp0 - 0xcu;
        t2 = cow_thiscall(g, edi, ecx, 2, t1, 0x1388u);
        t3 = rd32(esi * 4u + rd32(COW_IMG(0x10492db4u)));
        g->edx = t3;
        cow_thiscall(g, ebx, rd32(COW_IMG(0x10492db4u)), 1, t3);
        t4 = g->edx;
        if ((int32_t)(esi + 1u) < (int32_t)rd8(rd32(COW_IMG(0x10492db4u)) + 0x2ee0u))
        {
            eax = rd32(COW_IMG(0x10492db4u));
            ecx = rd8(rd32(COW_IMG(0x10492db4u)) + 0x2ee0u);
            edx = t4;
            esi = esi + 1u;
            goto L_100dbce3;
        }
        eax = rd32(COW_IMG(0x10492db4u));
    }
    wr32(COW_IMG(0x10492db4u), 0u);
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100dbcb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100dbcb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
