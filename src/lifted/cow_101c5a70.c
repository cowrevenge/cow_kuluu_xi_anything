/* f_0x101c5a70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101c5a70(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        edx = 0u;
        goto L_101c5aa2;
    }
    eax = rd32(self + 8u);
    ecx = rd32(self);
    edx = 0u;
L_101c5a85: ;
    if (rd32(ecx) == 0u) goto L_101c5a9a;
    if (rd32(ecx + 8u) != arg2) goto L_101c5a9a;
    if (rd32(ecx + 0xcu) == arg3) goto L_101c5add;
L_101c5a9a: ;
    if (edx + 1u < eax)
    {
        ecx = ecx + 0x10u;
        edx = edx + 1u;
        goto L_101c5a85;
    }
    edx = edx + 1u;
L_101c5aa2: ;
    if (eax == 0u)
    {
        esi = 0u;
    }
    else
    {
        ecx = rd32(self);
        edx = rd32(self);
        esi = 0u;
L_101c5ab0: ;
        if (rd32(ecx) == 0u) goto L_101c5abf;
        if (esi + 1u < eax)
        {
            ecx = ecx + 0x10u;
            esi = esi + 1u;
            goto L_101c5ab0;
        }
        esi = esi + 1u;
    }
L_101c5ad8: ;
    if (esi != rd32(self + 8u)) goto L_101c5ae7;
L_101c5add: ;
    g->edx = edx;
    return 0xffffffffu;
L_101c5abf: ;
    wr32(edx + esi * 0x10u + 4u, arg1);
    wr32(esi * 0x10u + rd32(self) + 8u, arg2);
    wr32(esi * 0x10u + rd32(self) + 0xcu, arg3);
    eax = esi << 4u;
    edx = arg2;
    goto L_101c5ad8;
L_101c5ae7: ;
    t1 = rd32(self + 4u);
    g->ebx = arg1;
    g->eax = t1;
    g->edx = arg2;
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall(g, COW_IMG(0x101c46d0u), rd32(COW_IMG(0x10662dccu)), 4, t1, arg1, arg3, arg2);
    t3 = g->edx;
    if (t2 != 0u) goto L_101c5b13;
    eax = t2;
    edx = t3;
    wr32(esi * 0x10u + rd32(self), eax);
    g->ebx = in_ebx;
    g->edx = edx;
    return 0xffffffffu;
L_101c5b13: ;
    wr32(esi * 0x10u + rd32(self), 1u);
    g->ebx = in_ebx;
    g->edx = esi << 4u;
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c5a70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c5a70(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
