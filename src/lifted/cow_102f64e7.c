/* f_0x102f64e7 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_102f64e7(Guest* g)
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg3 + rd32(sp0 + 0x10u) > rd32(arg2 + 4u))
    {
        ebx = arg3 + rd32(sp0 + 0x10u);
        goto L_102f6508;
    }
    eax = rd32(sp0 + 0x10u);
    ebx = arg3 + rd32(sp0 + 0x10u);
    if (eax > rd32(arg2 + 0xcu)) goto L_102f6508;
    if (rd32(arg2) != 0u) goto L_102f651c;
L_102f6508: ;
    wr32(rd32(arg1) + 0x14u, 0x14u);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall_cdecl(g, rd32(rd32(arg1)), arg3, 1, arg1);
    t1 = g->edx;
    ecx = arg1;
    edx = t1;
L_102f651f: ;
    if (arg3 < rd32(arg2 + 0x18u))
    {
        eax = rd32(arg2 + 0x18u);
        goto L_102f6530;
    }
    eax = rd32(arg2 + 0x18u);
    if (ebx <= eax + rd32(arg2 + 0x10u))
    {
        ecx = eax + rd32(arg2 + 0x10u);
        goto L_102f6577;
    }
    ecx = eax + rd32(arg2 + 0x10u);
L_102f6530: ;
    if (rd8(arg2 + 0x22u) == 0u)
    {
        wr32(rd32(arg1) + 0x14u, 0x44u);
        g->eax = rd32(arg1);
        g->edx = edx;
        t2 = rd32(arg1);
        g->esp = sp0 - 0x10u;
        t3 = cow_thiscall_cdecl(g, rd32(t2), ecx, 1, arg1);
        t4 = g->edx;
        eax = t3;
        ecx = arg1;
        edx = t4;
    }
    if (rd8(arg2 + 0x21u) != 0u)
    {
        g->esi = arg2;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall_cdecl(g, COW_IMG(0x102f63d4u), ecx, 2, arg1, 1u);
        t5 = g->edx;
        wr8(arg2 + 0x21u, 0u);
        ecx = 1u;
        edx = t5;
    }
    if (arg3 > rd32(arg2 + 0x18u))
    {
        eax = arg3;
    }
    else
    {
        if ((int32_t)(ebx - rd32(arg2 + 0x10u)) >= 0)
        {
            eax = ebx - rd32(arg2 + 0x10u);
        }
        else
        {
            eax = 0u;
        }
    }
    wr32(arg2 + 0x18u, eax);
    g->esi = arg2;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall_cdecl(g, COW_IMG(0x102f63d4u), ecx, 2, arg1, 0u);
    t6 = g->edx;
    ecx = 0u;
    edx = t6;
L_102f6577: ;
    if (rd32(arg2 + 0x1cu) >= ebx) goto L_102f65eb;
    eax = rd32(arg2 + 0x1cu);
    if (eax >= arg3)
    {
        edi = eax;
    }
    else
    {
        if ((uint8_t)arg5 != 0u)
        {
            wr32(rd32(arg1) + 0x14u, 0x14u);
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall_cdecl(g, rd32(rd32(arg1)), ecx, 1, arg1);
            t7 = g->edx;
            ecx = arg1;
            edx = t7;
        }
        edi = arg3;
    }
    if ((uint8_t)arg5 != 0u)
    {
        wr32(arg2 + 0x1cu, ebx);
    }
    if (rd8(arg2 + 0x20u) == 0u) goto L_102f65d3;
    t8 = rd32(arg2 + 8u);
    wr32(sp0 + 0x10u, t8);
    ebx = ebx - rd32(arg2 + 0x18u);
    edi = edi - rd32(arg2 + 0x18u);
L_102f65cd: ;
    if (edi < ebx) goto L_102f65bd;
L_102f65eb: ;
    if ((uint8_t)arg5 == 0u) goto L_102f65f5;
L_102f65f1: ;
    wr8(arg2 + 0x21u, 1u);
L_102f65f5: ;
    g->esi = in_esi;
    g->edx = edx;
    return arg3 * 4u + rd32(arg2) - rd32(arg2 + 0x18u) * 4u;
L_102f651c: ;
    ecx = arg3;
    edx = in_edx;
    goto L_102f651f;
L_102f65bd: ;
    t9 = rd32(sp0 + 0x10u);
    t10 = rd32(edi * 4u + rd32(arg2));
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102f595eu), 3, t10, t9, in_edi);
    t11 = g->edx;
    ecx = t9;
    edx = t11;
    edi = edi + 1u;
    goto L_102f65cd;
L_102f65d3: ;
    if ((uint8_t)arg5 != 0u) goto L_102f65f1;
    wr32(rd32(arg1) + 0x14u, 0x14u);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall_cdecl(g, rd32(rd32(arg1)), rd32(arg1), 1, arg1);
    t12 = g->edx;
    edx = t12;
    goto L_102f65eb;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f64e7(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f64e7(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
