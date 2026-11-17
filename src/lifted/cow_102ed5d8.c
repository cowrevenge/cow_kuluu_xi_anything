/* f_0x102ed5d8 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102ed5d8(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;

    if (rd32(in_esi + 0x10u) == 0xccu)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(rd32(in_esi + 0x17cu)), self, 0);
        t1 = g->edx;
        wr32(in_esi + 0x78u, 0u);
        wr32(in_esi + 0x10u, 0xccu);
        ecx = in_esi;
        edx = t1;
    }
    if (rd8(rd32(in_esi + 0x17cu) + 8u) == 0u) goto L_102ed667;
L_102ed605: ;
    if (rd32(in_esi + 0x78u) >= rd32(in_esi + 0x60u)) goto L_102ed645;
    eax = rd32(in_esi + 0x78u);
L_102ed60c: ;
    if (rd32(in_esi + 8u) == 0u)
    {
        ecx = rd32(in_esi + 8u);
    }
    else
    {
        ecx = rd32(in_esi + 8u);
        wr32(ecx + 4u, eax);
        t2 = rd32(in_esi + 0x60u);
        wr32(rd32(in_esi + 8u) + 8u, t2);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(rd32(in_esi + 8u)), t2, 0);
        t3 = g->edx;
        ecx = in_esi;
        edx = t3;
    }
    g->edx = edx;
    t4 = rd32(in_esi + 0x78u);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(rd32(in_esi + 0x180u) + 4u), ecx, 0);
    t5 = g->edx;
    if (rd32(in_esi + 0x78u) == t4)
    {
        eax = rd32(in_esi + 0x78u);
        edx = t5;
        goto L_102ed67d;
    }
    eax = rd32(in_esi + 0x78u);
    edx = t5;
    if (eax < rd32(in_esi + 0x60u)) goto L_102ed60c;
    ecx = eax;
L_102ed645: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(rd32(in_esi + 0x17cu) + 4u), ecx, 0);
    t6 = g->ecx;
    t7 = g->edx;
    g->edx = t7;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, rd32(rd32(in_esi + 0x17cu)), t6, 0);
    t8 = g->edx;
    wr32(in_esi + 0x78u, 0u);
    if (rd8(rd32(in_esi + 0x17cu) + 8u) != 0u)
    {
        ecx = in_esi;
        edx = t8;
        goto L_102ed605;
    }
    edx = t8;
L_102ed667: ;
    t9 = (rd8(in_esi + 0x41u) != 0u) + 0xcdu;
    wr32(in_esi + 0x10u, t9);
    eax = (t9 & 0xffffff00u) | 1u;
L_102ed679: ;
    g->edx = edx;
    return eax;
L_102ed67d: ;
    eax = eax & 0xffffff00u;
    goto L_102ed679;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ed5d8(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ed5d8(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
