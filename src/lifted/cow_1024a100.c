/* f_0x1024a100 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1024a100(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, COW_IMG(0x106690ccu));
    t1 = g->ecx;
    t2 = g->edx;
    if (arg1 != 0u)
    {
        ecx = t1;
        edx = t2;
        goto L_1024a16d;
    }
    eax = rd32(COW_IMG(0x106690c8u));
    ecx = rd32(COW_IMG(0x106690c8u));
L_1024a120: ;
    if (rd32(eax + 4u) == 0u) goto L_1024a12f;
    if (rd32(eax + 0xc4u) == arg2)
    {
        edx = arg2;
        goto L_1024a197;
    }
L_1024a12f: ;
    if (eax + 0xf4u < ecx + 0x1310u)
    {
        eax = eax + 0xf4u;
        goto L_1024a120;
    }
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    t3 = cow_cdecl(g, COW_IMG(0x10249d30u), 1, arg2);
    t4 = g->ecx;
    if (t3 == 0u)
    {
        eax = t3;
        ecx = t4;
        edx = t3;
        goto L_1024a197;
    }
    ecx = t4;
    edx = t3;
    if (rd32(edx + 8u) != 0u)
    {
        eax = rd32(edx + 8u);
        goto L_1024a197;
    }
    eax = rd32(edx + 8u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_stdcall(g, COW_IMG(0x10249c80u), 0);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(t7 + 8u, 1u);
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), t6, 1, COW_IMG(0x106690ccu));
    return;
L_1024a16d: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t8 = cow_cdecl(g, COW_IMG(0x10249d30u), 1, arg2);
    t9 = g->ecx;
    t10 = g->edx;
    if (t8 == 0u)
    {
        eax = t8;
        ecx = t9;
        edx = t10;
    }
    else
    {
        ecx = t9;
        edx = t10;
        esi = t8;
        if ((int32_t)rd32(esi + 8u) <= 0)
        {
            eax = rd32(esi + 8u);
        }
        else
        {
            eax = rd32(esi + 8u);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t11 = cow_cdecl(g, COW_IMG(0x10249cb0u), 1, eax);
            t12 = g->ecx;
            t13 = g->edx;
            wr32(esi + 8u, 0u);
            eax = t11;
            ecx = t12;
            edx = t13;
        }
    }
L_1024a197: ;
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, COW_IMG(0x106690ccu));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024a100(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1024a100(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
