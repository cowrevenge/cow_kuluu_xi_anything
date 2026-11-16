/* f_0x102f6605 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_102f6605(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = arg3 + rd32(sp0 + 0x10u);
    t2 = rd32(sp0 + 0x10u);
    t3 = rd32(arg2 + 4u);
    wr32(sp0 + 0x10u, t1);
    if (arg3 + t2 > t3)
    {
        edi = t1;
        goto L_102f6629;
    }
    eax = t2;
    edi = t1;
    if (eax > rd32(arg2 + 0xcu)) goto L_102f6629;
    if (rd32(arg2) != 0u)
    {
        ecx = self;
        edx = in_edx;
        goto L_102f663b;
    }
L_102f6629: ;
    wr32(rd32(arg1) + 0x14u, 0x14u);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall_cdecl(g, rd32(rd32(arg1)), rd32(arg1), 1, arg1);
    t4 = g->edx;
    ecx = arg1;
    edx = t4;
L_102f663b: ;
    if (arg3 < rd32(arg2 + 0x18u))
    {
        eax = rd32(arg2 + 0x18u);
        goto L_102f664b;
    }
    eax = rd32(arg2 + 0x18u);
    if (edi <= eax + rd32(arg2 + 0x10u))
    {
        ecx = eax + rd32(arg2 + 0x10u);
        goto L_102f669b;
    }
    ecx = eax + rd32(arg2 + 0x10u);
L_102f664b: ;
    if (rd8(arg2 + 0x22u) == 0u)
    {
        wr32(rd32(arg1) + 0x14u, 0x44u);
        g->eax = arg1;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t5 = cow_thiscall_cdecl(g, rd32(rd32(arg1)), rd32(arg1), 1, arg1);
        t6 = g->edx;
        eax = t5;
        ecx = arg1;
        edx = t6;
    }
    if (rd8(arg2 + 0x21u) != 0u)
    {
        g->esi = arg2;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t7 = cow_thiscall_cdecl(g, COW_IMG(0x102f645cu), ecx, 2, arg1, 1u);
        t8 = g->edx;
        wr8(arg2 + 0x21u, 0u);
        eax = t7;
        ecx = 1u;
        edx = t8;
    }
    if (arg3 <= rd32(arg2 + 0x18u))
    {
        if ((int32_t)(edi - rd32(arg2 + 0x10u)) >= 0)
        {
            eax = edi - rd32(arg2 + 0x10u);
        }
        else
        {
            eax = 0u;
        }
        wr32(arg2 + 0x18u, eax);
    }
    else
    {
        wr32(arg2 + 0x18u, arg3);
    }
    g->esi = arg2;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall_cdecl(g, COW_IMG(0x102f645cu), ecx, 2, arg1, 0u);
    t9 = g->edx;
    ecx = 0u;
    edx = t9;
L_102f669b: ;
    if (rd32(arg2 + 0x1cu) >= edi) goto L_102f670e;
    ebx = rd32(arg2 + 0x1cu);
    if (ebx < arg3)
    {
        if ((uint8_t)arg5 != 0u)
        {
            wr32(rd32(arg1) + 0x14u, 0x14u);
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall_cdecl(g, rd32(rd32(arg1)), rd32(arg1), 1, arg1);
            t10 = g->edx;
            ecx = arg1;
            edx = t10;
        }
        ebx = arg3;
    }
    if ((uint8_t)arg5 != 0u)
    {
        wr32(arg2 + 0x1cu, edi);
    }
    if (rd8(arg2 + 0x20u) == 0u) goto L_102f66f6;
    t11 = rd32(arg2 + 0x18u);
    t12 = rd32(arg2 + 8u);
    wr32(sp0 + 0x10u, rd32(sp0 + 0x10u) - t11);
    ebx = ebx - t11;
    edi = t12 << 7u;
L_102f66ef: ;
    if (ebx < rd32(sp0 + 0x10u)) goto L_102f66e1;
L_102f670e: ;
    if ((uint8_t)arg5 == 0u) goto L_102f6718;
L_102f6714: ;
    wr8(arg2 + 0x21u, 1u);
L_102f6718: ;
    g->esi = in_esi;
    g->edx = edx;
    return arg3 * 4u + rd32(arg2) - rd32(arg2 + 0x18u) * 4u;
L_102f66e1: ;
    t13 = rd32(ebx * 4u + rd32(arg2));
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102f595eu), 3, t13, edi, in_edi);
    t14 = g->edx;
    ecx = edi;
    edx = t14;
    ebx = ebx + 1u;
    goto L_102f66ef;
L_102f66f6: ;
    if ((uint8_t)arg5 != 0u) goto L_102f6714;
    wr32(rd32(arg1) + 0x14u, 0x14u);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall_cdecl(g, rd32(rd32(arg1)), rd32(arg1), 1, arg1);
    t15 = g->edx;
    edx = t15;
    goto L_102f670e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f6605(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f6605(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
