/* f_0x101ccd20 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_101cc720 with (this, stack_arg, 0); if it returns zero, copies the NUL-terminated string at this+0x328 to the second stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_101ccd20(Guest* g, uint32_t self, uint32_t arg0, uint32_t sp0)
{
    const uint32_t old_esi = g->esi;
    const uint32_t old_edi = g->edi;

    /* 101ccd20: mov eax, dword ptr [esp + 4] */
    uint32_t eax = arg0;

    /* 101ccd24: push esi */
    g->esp -= 4u;
    wr32(g->esp, old_esi);

    /* 101ccd28: mov esi, ecx */
    g->esi = self;

    /*
       101ccd25: push 0
       101ccd27: push eax
       101ccd2a: call 0x101cc720

       The callee is thiscall with ecx = self and two stack arguments:
       (eax, 0).  The saved esi remains below those arguments and is left
       on the stack by the callee's ret 8.
    */
    eax = cow_thiscall(g, COW_IMG(0x101cc720u), self, 2u, eax, 0u);

    /* 101ccd2f: test eax, eax / 101ccd31: jne 0x101ccd56 */
    if (eax != 0u)
    {
        /* 101ccd56: pop esi */
        g->esi = rd32(g->esp);
        g->esp += 4u;

        /* 101ccd57: ret 8 */
        return eax;
    }

    /* 101ccd33: add esi, 0x328 */
    uint32_t esi = self + 0x328u;

    /* 101ccd39: push edi */
    g->esp -= 4u;
    wr32(g->esp, old_edi);

    /* 101ccd3a: mov edi, esi */
    uint32_t edi = esi;

    /* 101ccd3c: or ecx, 0xffffffff */
    uint32_t ecx = 0xFFFFFFFFu;

    /* 101ccd3f: repne scasb al, byte ptr es:[edi] */
    const uint8_t al = (uint8_t)eax;
    while (ecx != 0u)
    {
        uint8_t b = rd8(edi);
        uint8_t r = (uint8_t)(al - b);
        edi += 1u;
        ecx -= 1u;
        if (r == 0u)
            break;
    }

    /* 101ccd41: mov edi, dword ptr [esp + 0x10] */
    /*
       At this point the stack is:
         esp + 0x00 : saved edi
         esp + 0x04 : saved esi
         esp + 0x08 : return address
         esp + 0x0c : first stack argument
         esp + 0x10 : second stack argument (destination pointer)
    */
    edi = rd32(sp0 + 8u);

    /* 101ccd45: not ecx */
    ecx = ~ecx;

    /* 101ccd47: mov edx, ecx */
    uint32_t edx = ecx;

    /* 101ccd49: shr ecx, 2 */
    ecx >>= 2u;

    /* 101ccd4c: rep movsd dword ptr es:[edi], dword ptr [esi] */
    while (ecx != 0u)
    {
        wr32(edi, rd32(esi));
        esi += 4u;
        edi += 4u;
        ecx -= 1u;
    }

    /* 101ccd4e: mov ecx, edx */
    ecx = edx;

    /* 101ccd50: and ecx, 3 */
    ecx &= 3u;

    /* 101ccd53: rep movsb byte ptr es:[edi], byte ptr [esi] */
    while (ecx != 0u)
    {
        wr8(edi, rd8(esi));
        esi += 1u;
        edi += 1u;
        ecx -= 1u;
    }

    /* 101ccd55: pop edi */
    edi = rd32(g->esp);
    g->esp += 4u;

    /* 101ccd56: pop esi */
    esi = rd32(g->esp);
    g->esp += 4u;

    /* Restore callee-saved registers to the values the original leaves. */
    g->edi = old_edi;
    g->esi = old_esi;

    /* 101ccd57: ret 8 */
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ccd20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_101ccd20(g, g->ecx, arg0, sp0);
    g->esp = sp0;
    rt_return(g, result, 8u);
}
/* COW_ADAPTER END */
