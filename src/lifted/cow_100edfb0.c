/* f_0x100edfb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100edfb0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x104df770u)) != 0u)
    {
        edx = rd32(COW_IMG(0x104df770u));
        goto L_100edfc0;
    }
    return 0xffffffffu;
L_100edfc0: ;
    if (rd32(arg1) != 0u) goto L_100edfd0;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_stdcall(g, COW_IMG(0x100edea0u), 0);
    t1 = g->ecx;
    t2 = g->edx;
    ecx = t1;
    edx = t2;
L_100edfdd: ;
    if (rd32(arg1) > 4u) goto L_100ee01d;
    eax = rd32(arg1);
    t6 = rd32(COW_IMG(0x100ee084u) + eax * 4u);
    switch (t6 - RD)
    {
    case 0x100edfebu: goto L_100edfeb;
    case 0x100ee021u: goto L_100ee021;
    case 0x100ee040u: goto L_100ee040;
    case 0x100ee047u: goto L_100ee047;
    default: rt_fatal(g, COW_IMG(0x100edfe4u), "switch");
    }
    return 0;
L_100edfd0: ;
    g->eax = in_eax;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_stdcall(g, COW_IMG(0x100edeb0u), 0);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 != 0u)
    {
        eax = t3;
        goto L_100ee07d;
    }
    ecx = t4;
    edx = t5;
    goto L_100edfdd;
L_100edfeb: ;
    wr32(edx + 0x136acu, 0u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 8u);
    t11 = g->ecx;
    t12 = g->edx;
    g->edx = t12;
    g->esp = sp0 - 0xcu;
    cow_thiscall_cdecl(g, COW_IMG(0x100f0000u), t11, 1, t10);
    t13 = g->edx;
    t14 = rd32(rd32(COW_IMG(0x104df770u)) + 0x13690u);
    g->esp = sp0 - 0x10u;
    cow_thiscall_cdecl(g, COW_IMG(0x10115610u), t14, 1, t14);
    t15 = rd32(arg1) + 1u;
    wr32(arg1, t15);
L_100ee01d: ;
    return 0u;
L_100ee021: ;
    t8 = rd32(edx + 0x13690u);
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10115970u), 2, t8, edx + 0x136dcu);
    t9 = rd32(arg1) + 1u;
    wr32(arg1, t9);
    return 0u;
L_100ee040: ;
    return 1u;
L_100ee047: ;
    t7 = rd32(edx + 0x13690u);
    g->esp = sp0 - 4u;
    cow_thiscall_cdecl(g, COW_IMG(0x10115d50u), t7, 2, t7, edx + 0x13698u);
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) == 0u)
    {
        wr32(arg1, rd32(arg1) + 1u);
    }
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) != 0xffffffffu) goto L_100ee01d;
    eax = rd32(COW_IMG(0x104df770u));
L_100ee07d: ;
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100edfb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100edfb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
