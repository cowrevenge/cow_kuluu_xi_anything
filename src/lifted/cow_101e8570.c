/* f_0x101e8570 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101e8570(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_18;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
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

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_cdecl(g, COW_IMG(0x101e8500u), 1, 1u);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x101efb20u), self, 0);
    t4 = g->edx;
    if (t3 != 0u)
    {
        eax = t3;
        edx = t4;
        ebx = t1;
        goto L_101e85e3;
    }
    eax = t3;
    edx = t4;
    ebx = t1;
    wr32(self + 0x16cu, 0xffffffffu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t5 = cow_thiscall(g, COW_IMG(0x101e6f70u), self, 0);
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10381ef8u));
    t8 = g->edx;
    if (ebx == 0u)
    {
        eax = t7;
        edx = t8;
    }
    else
    {
        edx = t8;
        if (rd32(rd32(COW_IMG(0x10663658u)) + 8u) != 0u)
        {
            eax = rd32(COW_IMG(0x10663658u));
        }
        else
        {
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t9 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10381f0cu), 1u, 0u);
            t10 = g->edx;
            eax = t9;
            edx = t10;
        }
    }
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, 0u, 2u);
    t11 = g->edx;
    edx = t11;
L_101e8694: ;
    if (ebx != 0u)
    {
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10381e80u), 1u, 0u);
    }
L_101e86ab: ;
    return;
L_101e85e3: ;
    if (rd32(self + 0x16cu) == (uint32_t)(int16_t)rd16(rd32(eax + 0x1cu)))
    {
        edi = rd32(eax + 0x1cu);
    }
    else
    {
        edi = rd32(eax + 0x1cu);
        eax = (uint32_t)(int16_t)rd16(rd32(eax + 0x1cu));
        wr32(self + 0x16cu, eax);
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x101e6eb0u), self, 1, eax);
        t12 = g->edx;
        if (rd32(self + 0x16cu) != rd32(self + 0x170u))
        {
            edx = t12;
        }
        else
        {
            eax = rd32(self + 0x170u);
            t13 = rd32(self + 0x174u);
            g->edx = t13;
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x101e6e50u), self, 1, t13);
            t14 = g->edx;
            edx = t14;
        }
    }
    if ((int16_t)rd16(edi + 4u) < 30)
    {
        eax = (uint32_t)(int16_t)rd16(edi + 4u);
        goto L_101e8661;
    }
    eax = (uint32_t)(int16_t)rd16(edi + 4u);
    if ((int32_t)eax > 32) goto L_101e8661;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10381f0cu));
    t15 = g->edx;
    if (ebx == 0u) goto L_101e86ab;
    edx = t15;
    if (rd32(rd32(COW_IMG(0x1066365cu)) + 8u) != 0u) goto L_101e8694;
    eax = rd32(COW_IMG(0x1066365cu));
    t16 = (uint32_t)(int16_t)rd16(edi + 4u) - 0x1eu;
    wr32(eax + 0x3cu, t16);
    loc_18 = COW_IMG(0x10381ef8u);
L_101e868a: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, loc_18, 1u, 0u);
    t17 = g->edx;
    edx = t17;
    goto L_101e8694;
L_101e8661: ;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10381ef8u));
    if (ebx == 0u) goto L_101e86ab;
    if (rd32(rd32(COW_IMG(0x10663658u)) + 8u) != 0u)
    {
        edx = rd32(COW_IMG(0x10663658u));
        goto L_101e8694;
    }
    edx = rd32(COW_IMG(0x10663658u));
    loc_18 = COW_IMG(0x10381f0cu);
    goto L_101e868a;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e8570(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101e8570(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
