/* f_0x1031c756 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1031c756(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x103d09c8u)) != 0xffffffffu) goto L_1031c76a;
    eax = in_eax;
    ecx = self;
    edx = in_edx;
    esi = COW_IMG(0x103d09b8u);
L_1031c787: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    t4 = rd32(COW_IMG(0x10329228u));
    g->esp = sp0 - 0x10u;
    t5 = cow_stdcall(g, t4, 4, 0u, 0x400000u, 0x2000u, 4u);   /* kernel32.dll!VirtualAlloc */
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 == 0u)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        goto L_1031c87c;
    }
    eax = t5;
    ecx = t6;
    edx = t7;
    ebp = t4;
    edi = t5;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t8 = cow_thiscall(g, ebp, ecx, 4, edi, 0x10000u, 0x1000u, 4u);
    t9 = g->ecx;
    t10 = g->edx;
    if (t8 == 0u)
    {
        eax = t8;
        ecx = t9;
        edx = t10;
        goto L_1031c86e;
    }
    if (esi != COW_IMG(0x103d09b8u))
    {
        wr32(esi, COW_IMG(0x103d09b8u));
        wr32(esi + 4u, rd32(COW_IMG(0x103d09bcu)));
        wr32(COW_IMG(0x103d09bcu), esi);
        wr32(rd32(esi + 4u), esi);
    }
    else
    {
        if (rd32(COW_IMG(0x103d09b8u)) == 0u)
        {
            wr32(COW_IMG(0x103d09b8u), COW_IMG(0x103d09b8u));
        }
        if (rd32(COW_IMG(0x103d09bcu)) == 0u)
        {
            wr32(COW_IMG(0x103d09bcu), COW_IMG(0x103d09b8u));
        }
    }
    wr32(esi + 0x14u, edi + 0x400000u);
    wr32(esi + 0xcu, esi + 0x98u);
    wr32(esi + 0x10u, edi);
    wr32(esi + 8u, esi + 0x18u);
    eax = esi + 0x18u;
    ebp = 0u;
L_1031c81d: ;
    t11 = (((int32_t)ebp >= 16) - 1u & 0xf1u) - 1u;
    wr32(eax, t11);
    wr32(eax + 4u, 0xf1u);
    if ((int32_t)(ebp + 1u) < 1024)
    {
        eax = eax + 8u;
        ebp = ebp + 1u;
        goto L_1031c81d;
    }
    eax = eax + 8u;
    edx = t11;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10316dd0u), 3, edi, 0u, 0x10000u);
    t12 = g->edx;
    edx = t12;
L_1031c846: ;
    if (edi >= rd32(esi + 0x10u) + 0x10000u) goto L_1031c86a;
    wr8(edi + 0xf8u, rd8(edi + 0xf8u) | 0xffu);
    wr32(edi, edi + 8u);
    wr32(edi + 4u, 0xf0u);
    edi = edi + 0x1000u;
    goto L_1031c846;
L_1031c76a: ;
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_stdcall(g, rd32(COW_IMG(0x1032928cu)), 3, rd32(COW_IMG(0x109f8404u)), 0u, 0x2020u);   /* kernel32.dll!HeapAlloc */
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        edx = t3;
        goto L_1031c893;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    esi = t1;
    goto L_1031c787;
L_1031c86a: ;
    eax = esi;
L_1031c895: ;
    g->edx = edx;
    return eax;
L_1031c86e: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t13 = cow_stdcall(g, rd32(COW_IMG(0x1032922cu)), 3, edi, 0u, 0x8000u);   /* kernel32.dll!VirtualFree */
    t14 = g->ecx;
    t15 = g->edx;
    eax = t13;
    ecx = t14;
    edx = t15;
L_1031c87c: ;
    if (esi != COW_IMG(0x103d09b8u))
    {
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_stdcall(g, rd32(COW_IMG(0x10329260u)), 3, rd32(COW_IMG(0x109f8404u)), 0u, esi);   /* kernel32.dll!HeapFree */
        t16 = g->edx;
        edx = t16;
    }
L_1031c893: ;
    eax = 0u;
    goto L_1031c895;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031c756(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031c756(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
