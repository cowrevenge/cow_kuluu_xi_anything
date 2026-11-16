/* f_0x10318abe - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10318abe(Guest* g)
{
    uint32_t eax;
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

    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x1031d016u), g->eax, self, in_edx, 1, 3, 2u, in_edi, in_esi);
    t2 = g->edx;
    if ((int32_t)rd32(COW_IMG(0x109f9420u)) <= 0)
    {
        eax = t1;
        ecx = 2u;
        edx = t2;
        edi = 0u;
        goto L_10318b78;
    }
    ecx = 2u;
    edx = t2;
    esi = 0u;
L_10318adb: ;
    if (rd32(esi * 4u + rd32(COW_IMG(0x109f8414u))) == 0u)
    {
        eax = rd32(esi * 4u + rd32(COW_IMG(0x109f8414u)));
        goto L_10318b1e;
    }
    eax = rd32(esi * 4u + rd32(COW_IMG(0x109f8414u)));
    if ((rd8(eax + 0xcu) & 0x83u) != 0u) goto L_10318b0e;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x103171dcu), g->eax, ecx, edx, 1, 2, esi, eax);
    t3 = g->edx;
    if ((rd8(rd32(esi * 4u + rd32(COW_IMG(0x109f8414u))) + 0xcu) & 0x83u) == 0u)
    {
        eax = rd32(esi * 4u + rd32(COW_IMG(0x109f8414u)));
        ecx = rd32(COW_IMG(0x109f8414u));
        edx = t3;
        goto L_10318b19;
    }
    eax = rd32(esi * 4u + rd32(COW_IMG(0x109f8414u)));
    ecx = rd32(COW_IMG(0x109f8414u));
    edx = t3;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t4 = cow_call_regs(g, COW_IMG(0x1031722eu), g->eax, ecx, edx, 1, 2, esi, eax);
    t5 = g->edx;
    ecx = eax;
    eax = t4;
    edx = t5;
L_10318b0e: ;
    if ((int32_t)(esi + 1u) < (int32_t)rd32(COW_IMG(0x109f9420u)))
    {
        esi = esi + 1u;
        goto L_10318adb;
    }
    edi = 0u;
L_10318b78: ;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, ecx, edx, 1, 3, 2u, in_edi, in_esi);
    t14 = g->edx;
    g->edx = t14;
    return edi;
L_10318b19: ;
    edi = rd32(ecx + esi * 4u);
L_10318b62: ;
    if (edi != 0u)
    {
        wr32(edi + 0x10u, 0xffffffffu);
        wr32(edi + 4u, 0u);
        wr32(edi + 0xcu, 0u);
        wr32(edi + 8u, 0u);
        wr32(edi, 0u);
        wr32(edi + 0x1cu, 0u);
    }
    goto L_10318b78;
L_10318b1e: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t6 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, 0x38u, in_edi, in_esi);
    t7 = g->edx;
    t8 = rd32(COW_IMG(0x109f8414u));
    wr32(esi * 4u + t8, t6);
    if (rd32(esi * 4u + rd32(COW_IMG(0x109f8414u))) == 0u)
    {
        eax = rd32(esi * 4u + rd32(COW_IMG(0x109f8414u)));
        ecx = t8;
        edx = t7;
        edi = 0u;
        goto L_10318b78;
    }
    eax = rd32(esi * 4u + rd32(COW_IMG(0x109f8414u)));
    ecx = t8;
    edx = t7;
    esi = esi << 2u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, rd32(COW_IMG(0x10329184u)), 1, eax + 0x20u);   /* kernel32.dll!InitializeCriticalSection */
    t9 = g->ecx;
    t10 = g->edx;
    t11 = rd32(esi + rd32(COW_IMG(0x109f8414u))) + 0x20u;
    g->ecx = t9;
    g->edx = t10;
    cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, t11);   /* kernel32.dll!EnterCriticalSection */
    t12 = g->ecx;
    t13 = g->edx;
    eax = rd32(COW_IMG(0x109f8414u));
    ecx = t12;
    edx = t13;
    edi = rd32(esi + rd32(COW_IMG(0x109f8414u)));
    goto L_10318b62;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10318abe(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10318abe(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
